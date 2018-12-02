//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#include "SubActivity.hpp"
#include "SubActivityList.hpp"

SubActivity :: SubActivity (string t, unsigned int p, SubActivityList& subActivity_list) : subActivityList (subActivity_list){
    title=t;
    position=p;
}

SubActivity :: ~SubActivity(){
}

string SubActivity :: getTitle() const {
    return title;
}

string SubActivity :: getDescription(){
    return description;
}

unsigned int SubActivity :: getPosition(){
    return position;
}

void SubActivity :: setDescription(string _description){
    description=_description;
}

const SubActivityList& SubActivity :: getMainSubActivityList(){
    return subActivityList;
}

bool SubActivity ::operator == (const SubActivity &_other) const {
    return title == _other.getTitle();
}


