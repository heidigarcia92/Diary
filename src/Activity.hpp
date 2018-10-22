/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Activity.hpp
 * Author: yuliya
 *
 * Created on 20 ottobre 2018, 9.31
 */

#ifndef ACTIVITY_H
#define ACTIVITY_H
#include "Date.hpp"

#include<list>
#include<stdlib.h>
#include<iostream>
#include "SubActivityList.hpp"

using namespace std;

class ActivityList;

class Person;

class Activity{
public:
    Activity(string title, unsigned int position, ActivityList& activity_list);
    ~Activity();
    string getTitle();
    string getDescription();
    void setDescription(string description_);
    void setDeadline(Date& deadline);
    Date getDate();
    unsigned int getPosition();
    void addPerson(Person* person);
    bool removePerson(Person* person);
    //list <ActivityList*> getSubActivityList();
    ActivityList* getMainActivityList();
    list <Person*> getPersonContainer();
private:
    string title;
    string description;
    Date deadline;
    unsigned int position;
    ActivityList& activityList;
    list <Person*> people;
};


#endif /* ACTIVITY_H */

