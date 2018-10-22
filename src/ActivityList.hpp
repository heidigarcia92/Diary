/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ActivityList.hpp
 * Author: yuliya
 *
 * Created on 20 ottobre 2018, 10.01
 */

#ifndef ACTIVITYLIST_H
#define ACTIVITYLIST_H
#include "Activity.hpp"
#include<list>

using namespace std;

class Showcase;

class ActivityList{
public:
    ActivityList(string name, unsigned int position, Showcase& showcase);
    ~ActivityList();
    unsigned int getPosition();
    string getName();
    Activity* createActivity(string title);
    bool removeActivity(Activity* activity);
    Activity* getActivity(string name);
    list <Activity*> getActivityContainer();
    Showcase* getMainShowcase();
private:
    unsigned int position;
    string name;
    list <Activity*> activities;
    unsigned int nextActivityPosition;
    Showcase& _showcase;
};

#endif /* ACTIVITYLIST_H */

