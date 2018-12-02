//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#ifndef DIARY_DATE_HPP
#define DIARY_DATE_HPP

#include "DateException.hpp"
#include <ctime>
#include <iostream>

#include <boost/archive/tmpdir.hpp>

#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>

#include <boost/serialization/base_object.hpp>
#include <boost/serialization/utility.hpp>
#include <boost/serialization/list.hpp>
#include <boost/serialization/assume_abstract.hpp>

using namespace std;

class Date {
public:
    Date();
    Date(const Date& date_obj);
    Date(int day, int month, int year);
    Date(const string& iso_string);
    ~Date();
    string getDate() const;
    tm rawDate();
    int getDay() const;
    int getMonth() const;
    int getYear() const;
private:
    friend std::ostream & operator<<(std::ostream &os, Date &a);
    friend class boost::serialization::access;
    template<class Archive> void serialize(Archive & ar, const unsigned int){
        ar & date.tm_mday & date.tm_mon & date.tm_year;
    }

    tm date;
    void clear();
    void check_date(int day, int month, int year);
    bool is_leap(int year);
    int dat[3] = { 0 };
};

#endif //DIARY_DATE_HPP
