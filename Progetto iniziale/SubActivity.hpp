//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#ifndef DIARY_SUBACTIVITY_HPP
#define DIARY_SUBACTIVITY_HPP

#include <iostream>

using namespace std;

class SubActivityList;

class SubActivity {
public:
    SubActivity (string title, unsigned int position, SubActivityList& subActivity_list);
    ~SubActivity();
    string getTitle() const;
    string getDescription();
    void setDescription (string description_);
    unsigned int getPosition();
    const SubActivityList& getMainSubActivityList();
    bool operator == (const SubActivity& _other) const;
private:
    string title;
    string description;
    unsigned int position;
    SubActivityList& subActivityList;
};
#endif //DIARY_SUBACTIVITY_HPP
