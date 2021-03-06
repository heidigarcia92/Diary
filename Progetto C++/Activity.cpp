//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#include "Activity.hpp"

Activity :: Activity (string t, unsigned int p, ActivityList& activity_list) : activityList (&activity_list){
    title=t;
    position=p;
    subActivityList= new SubActivityList (*this);
}

Activity :: ~Activity(){
}

string Activity :: getTitle() const {
    return title;
}

void Activity :: setTitle(string _title) {
    title = _title;
}

string Activity :: getDescription(){
    return description;
}

unsigned int Activity :: getPosition(){
    return position;
}

void Activity :: setPosition(unsigned int _pos) {
    position = _pos;
}

void Activity :: setDescription(string _description){
    description=_description;
}

void Activity :: setDeadline(Date& _deadline){
    deadline=_deadline;
}

Date& Activity :: getDate(){
    return deadline;
}

void Activity :: addPerson(struct Person& person){
    for (struct Person& p : people){
        if(p == person){
            return;
        }
    }
    people.push_back(person);
}

bool Activity :: removePerson(struct Person& person){
    for (struct Person& p : people){
        if(p == person){
            people.remove(p);
            return true;
        }
    }
    return false;
}

const ActivityList& Activity :: getMainActivityList(){
    return *activityList;
}

list <struct Person> Activity :: getPersonContainer(){
    return people;
}

bool Activity ::operator == (const Activity &_other) const {
    return title == _other.getTitle();
}

bool Activity :: operator < (const Activity& _other) const {
    return position < _other.position;
}

SubActivityList& Activity :: getSubActivityList(){
    return *subActivityList;
}

std::ostream & operator << (std::ostream &os, Activity &a) {
    
    for (Person& p : a.getPersonContainer()) {
        os << p;
    }
    
    return os << ' ' << a.title << ' ' << a.description << ' ' << a.position << ' ' << a.deadline << ' ' << a.subActivityList;
}