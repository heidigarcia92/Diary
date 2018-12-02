//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#ifndef DIARY_SUBACTIVITY_HPP
#define DIARY_SUBACTIVITY_HPP

#include <iostream>

#include <boost/archive/tmpdir.hpp>

#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>

#include <boost/serialization/base_object.hpp>
#include <boost/serialization/utility.hpp>
#include <boost/serialization/list.hpp>
#include <boost/serialization/assume_abstract.hpp>

using namespace std;

class SubActivityList;

class SubActivity {
public:
    SubActivity() {};
    SubActivity(string title, unsigned int position, SubActivityList& subActivity_list);
    ~SubActivity();
    string getTitle() const;
    string getDescription();
    void setDescription (string description_);
    unsigned int getPosition();
    const SubActivityList& getMainSubActivityList();
    bool operator == (const SubActivity& _other) const;
    
private:

    friend std::ostream & operator<<(std::ostream &os, const SubActivity &sa);
    friend class boost::serialization::access;
    
    template<class Archive> void serialize(Archive & ar, const unsigned int){
        ar & title & description & position;
    }

    string title;
    string description;
    unsigned int position;
    SubActivityList* subActivityList;
};
#endif //DIARY_SUBACTIVITY_HPP
