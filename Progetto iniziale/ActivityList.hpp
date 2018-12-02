//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#ifndef DIARY_ACTIVITYLIST_HPP
#define DIARY_ACTIVITYLIST_HPP

#include <list>
#include <iostream>
#include "Activity.hpp"

using namespace std;

class Board;

class ActivityList {
public:
    ActivityList(string name, unsigned int position, Board& board);
    ~ActivityList();
    unsigned int getPosition();
    string getName() const;
    void createActivity(string title);
    bool removeActivity(Activity& activity);
    Activity& getActivity(string name);
    list <Activity> getActivityContainer();
    Board& getMainBoard();
    bool operator == (const ActivityList& other) const;
private:
    unsigned int _position;
    string _name;
    list <Activity> activities;
    unsigned int nextActivityPosition;
    Board& _board;

};


#endif //DIARY_ACTIVITYLIST_HPP
