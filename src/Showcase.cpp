//
//  Showcase.cpp
//  Diary
//
//  Created by Heidi Garcia Canizares on 16/10/18.
//  Copyright © 2018 Heidi Garcia Canizares. All rights reserved.
//

#include "Showcase.hpp"
#include "Person.hpp"
#include "ActivityList.hpp"

Showcase :: Showcase (string n){
    name=n;
    nextActivityPosition = 0;
}

Showcase :: ~Showcase(){
    for (ActivityList* a: activityList){
        delete a;
    }
}

string Showcase :: getName(){
    return name;
}

ActivityList* Showcase :: createActivityList (string name){
    for(ActivityList* al : activityList){
        if (al -> getName() == name){
            return NULL;
        }
    }
    ActivityList* al = new ActivityList (name, nextActivityPosition++, *this);
    activityList.push_back(al);
    return al;
}

bool Showcase :: removeActivityList (ActivityList& _activityList){
    for (ActivityList* al : activityList){
        if(al -> getName() == _activityList.getName()){
            activityList.remove(al);
            return true;
        }
    }
    return false;
}

ActivityList* Showcase :: getActivityList (string name){
    for (ActivityList* al : activityList){
        if(al -> getName() == name){
            return al;
        }
    }
    return NULL;
}

void Showcase :: addPerson(Person* person){
    for (Person* p : people){
        if(*p == *person){
            return;
        }
    }
    people.push_back(person);
}

bool Showcase :: removePerson(Person* person){
    for (Person* p : people){
        if(*p == *person){
            people.remove(p);
            return true;
        }
    }
    return false;
}

list <Person*> Showcase :: getPersonContainer(){
    return people;
}

list <ActivityList*> Showcase :: getActivityListContainer(){
    return activityList;
}
