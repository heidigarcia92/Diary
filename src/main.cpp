//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#include <iostream>
#include <string>
#include "Board.hpp"
#include "Activity.hpp"
#include "Administrator.hpp"

using namespace std;

int main() {
    Administrator admin;
    admin.addBoard("Cose da fare");
    Person ernesto;
    ernesto.setFirstName("Ernesto");
    ernesto.setLastName ("Garcia");
    Board& b = admin.getBoard("Cose da fare");
    b.createActivityList("Giornata canina");
    ActivityList& al = b.getActivityList("Giornata canina");
    al.createActivity("Mangiare la pappa");
    Activity& a1 = al.getActivity("Mangiare la pappa");
    a1.addPerson(ernesto);
    al.createActivity("Andare dal veterinario");
    Activity& a2 = al.getActivity("Andare dal veterinario");
    a2.addPerson(ernesto);
    a2.getSubActivityList().createSubActivity("Fare il vaccino");
    cout << ernesto.firstName + " " + ernesto.lastName << endl;
    for (Board bacheca : admin.getBoardContainer()){
        cout << bacheca.getName() << endl;
        for (ActivityList lista : bacheca.getActivityListContainer() ){
            cout << lista.getName() << endl;
            for (Activity attivita : lista.getActivityContainer()){
                cout << attivita.getTitle() << endl;
                for (SubActivity sub : attivita.getSubActivityList().getSubActivityContainer()) {
                    cout << sub.getTitle() << endl;
                }
            }
        }
    }

}