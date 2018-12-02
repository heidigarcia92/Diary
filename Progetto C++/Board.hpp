//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#ifndef DIARY_BOARD_HPP
#define DIARY_BOARD_HPP

#include <iostream>
#include <list>
#include "ActivityList.hpp"

using namespace std;

class Board {
public:
    Board(string _name);
    Board() {};
    
    ~Board();
    string getName() const;
    void createActivityList (string _name);
    bool removeActivityList (const ActivityList& activityList);
    ActivityList& getActivityList (string _name);
    list <ActivityList> getActivityListContainer();
    bool operator == (const Board& __other) const;
    
    unsigned int nextActivityListPosition;
    
private:

    friend std::ostream & operator << (std::ostream &os, Board &a);
    friend class boost::serialization::access;
    template<class Archive> void serialize(Archive & ar, const unsigned int){
        ar & name & nextActivityListPosition & activityList;
    }
    
    string name;
    list <ActivityList> activityList;
};

#endif //DIARY_BOARD_HPP
