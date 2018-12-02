//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#include "SubActivityList.hpp"
#include "Activity.hpp"

SubActivityList :: SubActivityList (Activity& activity) : _activity (&activity) {
    nextSubActivityPosition = 0;
}

SubActivityList :: ~SubActivityList (){
}

bool SubActivityList :: removeSubActivity (SubActivity& subActivity){
    for (SubActivity& a : subActivities){
        if (a.getTitle() == subActivity.getTitle()){
            subActivities.remove(a);
            return true;
        }
    }
    return false;
}

SubActivity& SubActivityList :: getSubActivity (string name){
    for(SubActivity& a : subActivities){
        if (a.getTitle() == name){
            return a;
        }
    }
}

void SubActivityList :: createSubActivity (string title) {
    for(SubActivity& a : subActivities){
        if (a.getTitle()==title){
            return;
        }
    }
    SubActivity a (title, nextSubActivityPosition++, *this);
    subActivities.push_back(a);
}

list <SubActivity> SubActivityList :: getSubActivityContainer(){
    return subActivities;
}

Activity& SubActivityList :: getMainActivity(){
    return *_activity;
}

std::ostream & operator<<(std::ostream &os, SubActivityList &a) {
    
    for (SubActivity& su : a.getSubActivityContainer()) {
        os << su;
    }
    
    return os << ' ' << a.nextSubActivityPosition;
}