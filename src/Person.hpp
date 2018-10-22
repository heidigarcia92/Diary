//
//  Person.hpp
//  Diary
//
//  Created by Heidi Garcia Canizares on 16/10/18.
//  Copyright © 2018 Heidi Garcia Canizares. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;

class Showcase;

class Activity;

class Person {
public:
    Person (string firstName, string lastName);
    ~Person();
    string getFirstName ();
    string getLastName ();
    void addShowcase (Showcase& showcase);
    bool removeShowcase (Showcase& showcase);
    void addActivity (Activity* activity);
    bool removeActivity (Activity* activity);
    list <Showcase*> getShowcaseContainer ();
    list <Activity*> getActivityContainer ();
    bool operator == (Person& person);
private:
    string firstName;
    string lastName;
    list <Showcase*> showcases;
    list <Activity*> activities;
};

#endif /* Person_hpp */
