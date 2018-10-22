//
//  main.cpp
//  Diary
//
//  Created by Heidi Garcia Canizares on 16/10/18.
//  Copyright © 2018 Heidi Garcia Canizares. All rights reserved.
//

#include <iostream>
#include <string>
#include "Showcase.hpp"
#include "Person.hpp"

using namespace std;

int main() {
    
    //CREATE PERSON OBJ
    Person heidi("Heidi", "Garcia");
    Person yuliya("Yuliya", "Marchenko");
    
    //CREATE SHOWCASE OBJ
    Showcase sc1("test showcase 1");
    
    //TESTING ADDING PEOPLE <-> SHOWCASE
    sc1.addPerson(&heidi);
    heidi.addShowcase (sc1);
    yuliya.addShowcase(sc1);
    sc1.addPerson(&yuliya);
    
    //CREATING ACTIVITYLIST
    ActivityList* ac1 = sc1.createActivityList("activity list 1");
    ActivityList* ac2 = sc1.createActivityList("activity list 2");
    
    //TESTING ACTIVITY
    Activity* a1 = ac1->createActivity("To do 1 - boring");
    Activity* a2 = ac1->createActivity("To do 2 - happier");
    Activity* a3 = ac2->createActivity("Programming..");
    
    //TESTING ADDING PEOPLE <-> ACTIVITY
    a1->addPerson(&heidi);
    heidi.addActivity(a1);
    a2->addPerson(&yuliya);
    heidi.addActivity(a2);
    a2->addPerson(&yuliya);
    yuliya.addActivity(a2);
    a3->addPerson(&heidi);
    heidi.addActivity(a3);
    
    int i = 0;
    for (auto a : heidi.getShowcaseContainer()) {
        cout << i++ << ") Showcase: " + a->getName() << endl;
        
        for (auto b : a->getActivityListContainer()) {
            cout << i++ << ") ActivityList: " + b->getName() << endl;
            
            for (auto c : b->getActivityContainer()) {
                cout << i++ << ") Activity: " + c->getTitle() << endl;
            }
        }
    }
    
    sc1.removeActivityList(*ac1);
    sc1.removePerson(&yuliya);
    yuliya.removeShowcase(sc1);
    return 0;
}

