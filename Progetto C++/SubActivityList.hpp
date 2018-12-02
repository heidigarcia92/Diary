//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#ifndef DIARY_SUBACTIVITYLIST_HPP
#define DIARY_SUBACTIVITYLIST_HPP

#include <list>
#include <iostream>
#include "SubActivity.hpp"

using namespace std;

class Activity;

class SubActivityList {
public:
    SubActivityList() {};
    SubActivityList( Activity& activity);
    ~SubActivityList();
    void createSubActivity(string title);
    bool removeSubActivity(SubActivity& subActivity);
    SubActivity& getSubActivity(string name);
    list <SubActivity> getSubActivityContainer();
    Activity& getMainActivity();
private:
    
    friend std::ostream & operator<<(std::ostream &os, SubActivityList &a);
    friend class boost::serialization::access;
    
    template<class Archive> void serialize(Archive & ar, const unsigned int){
        ar & subActivities & nextSubActivityPosition;
    }

    list <SubActivity> subActivities;
    unsigned int nextSubActivityPosition;
    Activity* _activity;

};


#endif //DIARY_SUBACTIVITYLIST_HPP
