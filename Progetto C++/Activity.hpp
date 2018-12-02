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
    
    Person() {};
    
    Person(string firstName, string lastName) {
        setFirstName(firstName);
        setLastName(lastName);
    }
    
    void setFirstName(string n){
        firstName=n;
    }
    void setLastName(string ln){
        lastName=ln;
    }
    bool operator == (const struct Person& sp) const{
        return firstName == sp.firstName && lastName == sp.lastName;
    }
    
    friend std::ostream & operator<<(std::ostream &os, Person &a) {
        return os << a.firstName << ' ' << a.lastName;
    }
    
    friend class boost::serialization::access;
    
    template<class Archive> void serialize(Archive & ar, const unsigned int){
        ar & firstName & lastName;
    }
};

class Activity{
public:
    Activity() {};
    Activity(string title, unsigned int position, ActivityList& activity_list);
    ~Activity();
    string getTitle() const;
    void setTitle(string _title);
    string getDescription();
    void setDescription (string description_);
    void setDeadline (Date& deadline);
    Date& getDate();
    unsigned int getPosition();
    void setPosition(unsigned int _pos);
    void addPerson (struct Person& person);
    bool removePerson (struct Person& person);
    SubActivityList& getSubActivityList();
    const ActivityList& getMainActivityList();
    list <struct Person> getPersonContainer();
    bool operator == (const Activity& _other) const;
    bool operator< (const Activity& _other) const;
private:

    friend std::ostream & operator<<(std::ostream &os, Activity &a);
    friend class boost::serialization::access;
    
    template<class Archive> void serialize(Archive & ar, const unsigned int){
        ar & title & description & position & people & deadline & subActivityList;
    }

    string title;
    string description;
    unsigned int position;
    Date deadline;
    ActivityList* activityList;
    list <struct Person> people;
    SubActivityList* subActivityList;
};

#endif //DIARY_ACTIVITY_HPP
