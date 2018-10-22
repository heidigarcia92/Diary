/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Activity.cpp
 * Author: yuliya
 *
 * Created on 20 ottobre 2018, 9.31
 */


#include "Activity.hpp"
#include "Person.hpp"

Activity :: Activity (string t, unsigned int p, ActivityList& activity_list) : activityList (activity_list){
    title=t;
    position=p;
}

Activity  :: ~Activity(){
}
    
string Activity :: getTitle(){
    return title;
}

string Activity :: getDescription(){
    return description;
}

unsigned int Activity :: getPosition(){
    return position;
}

void Activity :: setDescription(string _description){
    description=_description;
}

void Activity :: setDeadline(Date& _deadline){
    deadline=_deadline;
}

Date Activity :: getDate(){
    return deadline;
}

void Activity :: addPerson(Person* person){
    for (Person* p : people){
        if(*p == *person){
            return;
        }
    }
    people.push_back(person);
}

bool Activity :: removePerson(Person* person){
    for (Person* p : people){
        if(*p == *person){
            people.remove(p);
            return true;
        }
    }
    return false;
}

ActivityList* Activity :: getMainActivityList(){
    return &activityList;
}

list <Person*> Activity :: getPersonContainer(){
    return people;
}

//list <ActivityList*> Activity :: getSubActivityList(){}
