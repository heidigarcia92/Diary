//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#include "Board.hpp"
//#include "ActivityList.hpp"

Board :: Board (string n){
    name=n;
    nextActivityPosition = 0;
}

Board :: ~Board(){
}

string Board :: getName () const {
    return name;
}

void Board :: createActivityList (string _name){
    for(ActivityList& al : activityList){
        if (al.getName() == _name){
            return;
        }
    }
    ActivityList al (_name, nextActivityPosition++, *this);
    activityList.push_back(al);
}

bool Board :: removeActivityList (const ActivityList& _activityList){
    for (const ActivityList& al : activityList){
        if(al.getName() == _activityList.getName()){
            activityList.remove(al);
            return true;
        }
    }
    return false;
}

ActivityList& Board :: getActivityList (string _name) {
    for (ActivityList& al : activityList) {
        if (al.getName() == _name) {
            return al;
        }
    }
}

list <ActivityList> Board :: getActivityListContainer(){
    return activityList;
};

bool Board :: operator == (const Board& __other) const {
    return name == __other.name;
}