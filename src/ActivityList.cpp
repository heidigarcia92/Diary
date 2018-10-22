/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   ActivityList.cpp
 * Author: yuliya
 *
 * Created on 20 ottobre 2018, 9.31
 */

#include "ActivityList.hpp"
#include "Showcase.hpp"

ActivityList :: ActivityList (string n, unsigned int p, Showcase& showcase) : _showcase (showcase) {
    name=n;
    position=p;
    nextActivityPosition = 0;
}

ActivityList :: ~ActivityList (){
    for (Activity* a : activities){
        delete a;
    }
}

unsigned int ActivityList :: getPosition(){
    return position;
}

string ActivityList :: getName(){
    return name;
}

bool ActivityList :: removeActivity (Activity* activity){
    for (Activity* a : activities){
        if (a -> getTitle() == activity -> getTitle()){
            activities.remove(a);
            return true;
        }
    }
    return false;
}

Activity* ActivityList :: getActivity(string name){
     for(Activity* a : activities){
         if (a->getTitle() == name){
            return a;
         }
     }
     return NULL;
}

Activity* ActivityList :: createActivity(string title) {
    for(Activity* a : activities){
        if (a->getTitle()==title){
            return NULL;
        }
    }
    Activity* a = new Activity(title, nextActivityPosition++, *this);
    activities.push_back(a);
    return a;
}

list <Activity*> ActivityList :: getActivityContainer(){
    return activities;
}

Showcase* ActivityList :: getMainShowcase(){
    return &_showcase;
}
