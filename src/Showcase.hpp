//
//  Showcase.hpp
//  Diary
//
//  Created by Heidi Garcia Canizares on 16/10/18.
//  Copyright © 2018 Heidi Garcia Canizares. All rights reserved.
//

#ifndef Showcase_hpp
#define Showcase_hpp

#include <iostream>
#include <list>
#include "ActivityList.hpp"
#include "Person.hpp"

using namespace std;

class Showcase {
public:
    Showcase(string name);
    ~Showcase();
    string getName();
    ActivityList* createActivityList (string name);
    bool removeActivityList (ActivityList& activityList);
    ActivityList* getActivityList (string name);
    void addPerson (Person* person);
    bool removePerson (Person* person);
    list <Person*> getPersonContainer();
    list <ActivityList*> getActivityListContainer();
private:
    string name;
    unsigned int nextActivityPosition;
    list <Person*> people;
    list <ActivityList*> activityList;
};

#endif /* Showcase_hpp */

