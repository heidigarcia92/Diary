//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#ifndef DIARY_ACTIVITY_HPP
#define DIARY_ACTIVITY_HPP


#include<list>
#include<stdlib.h>
#include<iostream>
#include "Date.hpp"
#include "SubActivityList.hpp"

using namespace std;

class ActivityList;

struct Person {
    string firstName;
    string lastName;
    void setFirstName(string n){
        firstName=n;
    }
    void setLastName(string ln){
        lastName=ln;
    }
    bool operator == (const struct Person& sp) const{
        return firstName == sp.firstName && lastName == sp.lastName;
    }
};

class Activity{
public:
    Activity(string title, unsigned int position, ActivityList& activity_list);
    ~Activity();
    string getTitle() const;
    string getDescription();
    void setDescription (string description_);
    void setDeadline (Date& deadline);
    Date& getDate();
    unsigned int getPosition();
    void addPerson (struct Person& person);
    bool removePerson (struct Person& person);
    SubActivityList& getSubActivityList();
    const ActivityList& getMainActivityList();
    list <struct Person> getPersonContainer();
    bool operator == (const Activity& _other) const;
private:
    string title;
    string description;
    Date deadline;
    unsigned int position;
    ActivityList& activityList;
    list <struct Person> people;
    SubActivityList* subActivityList;
};

#endif //DIARY_ACTIVITY_HPP
