//
//  Person.cpp
//  Diary
//
//  Created by Heidi Garcia Canizares on 16/10/18.
//  Copyright © 2018 Heidi Garcia Canizares. All rights reserved.
//

#include "Person.hpp"
#include "Showcase.hpp"
#include "Activity.hpp"

Person :: Person (string fn, string ln){
    firstName=fn;
    lastName=ln;
};

Person :: ~Person () {
};

string Person :: getFirstName (){
    return firstName;
};

string Person :: getLastName (){
    return lastName;
};
    
void Person :: addShowcase (Showcase& showcase){
    for (Showcase* sc : showcases){
        if (sc -> getName() == showcase.getName()){
            return;
        }
}
    showcases.push_back(&showcase);
};

bool Person :: removeShowcase (Showcase& showcase){
    for (Showcase* sc : showcases){
        if (sc -> getName() == showcase.getName()){
            showcases.remove(sc);
            return true;
        }
    }
    return false;
}

void Person :: addActivity(Activity* activity){
        for (Activity* a : activities){
            if (a -> getTitle() == activity -> getTitle()){
                return;
            }
        }
        activities.push_back(activity);
}

bool Person :: removeActivity(Activity* activity){
    for (Activity* a : activities){
        if (a -> getTitle() == activity -> getTitle()){
            activities.remove(a);
            return true;
        }
    }
    return false;
}

list <Showcase*> Person :: getShowcaseContainer (){
    return showcases;
}

list <Activity*> Person :: getActivityContainer (){
    return activities;
}

bool Person :: operator == (Person& person){
    return getFirstName() == person.getFirstName() && getLastName() == person.getLastName();
}

