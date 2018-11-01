//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#include "Board.hpp"
#include "ActivityList.hpp"

ActivityList :: ActivityList (string n, unsigned int p, Board& board) : _board (board) {
    _name=n;
    _position=p;
    nextActivityPosition = 0;
}

ActivityList :: ~ActivityList (){
}

unsigned int ActivityList :: getPosition(){
    return _position;
}

string ActivityList :: getName() const {
    return _name;
}

bool ActivityList :: removeActivity (Activity& activity){
    for (Activity& a : activities){
        if (a.getTitle() == activity.getTitle()){
            activities.remove(a);
            return true;
        }
    }
    return false;
}

Activity& ActivityList :: getActivity(string name){
    for(Activity& a : activities){
        if (a.getTitle() == name){
            return a;
        }
    }
}

void ActivityList :: createActivity(string title) {
    for(Activity& a : activities){
        if (a.getTitle()==title){
            return;
        }
    }
    Activity a(title, nextActivityPosition++, *this);
    activities.push_back(a);
}

list <Activity> ActivityList :: getActivityContainer(){
    return activities;
}

Board& ActivityList :: getMainBoard(){
    return _board;
}

bool ActivityList :: operator==(const ActivityList& other) const {
    return _name == other.getName();
}