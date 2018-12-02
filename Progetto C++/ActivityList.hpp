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
    ActivityList() {};
    ActivityList(string name, unsigned int position, Board& board);
    ~ActivityList();
    unsigned int getPosition();
    string getName() const;
    void setName(string _title);
    void createActivity(string title);
    bool removeActivity(Activity& activity);
    Activity& getActivity(string name);
    list <Activity>& getActivityContainer();
    Board& getMainBoard();
    bool operator == (const ActivityList& other) const;
private:
    
    friend std::ostream & operator<<(std::ostream &os, ActivityList &al);
    friend class boost::serialization::access;
    
    template<class Archive> void serialize(Archive & ar, const unsigned int){
        ar & activities & _name & _position & nextActivityPosition;
    }

    unsigned int _position;
    string _name;
    list <Activity> activities;
    unsigned int nextActivityPosition;
    Board* _board;

};


#endif //DIARY_ACTIVITYLIST_HPP
