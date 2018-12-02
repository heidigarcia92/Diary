//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#ifndef DIARY_DATE_HPP
#define DIARY_DATE_HPP

#include "DateException.hpp"
#include <ctime>
#include <iostream>

using namespace std;

class Date {
public:
    Date();
    Date(const Date& date_obj);
    Date(int day, int month, int year);
    Date(const string& iso_string);
    ~Date();
    string getDate() const;
    int getDay() const;
    int getMonth() const;
    int getYear() const;
private:
    tm date;
    void clear();
    void check_date(int day, int month, int year);
    bool is_leap(int year);
};

#endif //DIARY_DATE_HPP
