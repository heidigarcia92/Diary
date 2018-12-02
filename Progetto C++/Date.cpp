//
// Created by Heidi Garcia Canizares on 01/11/2018.
//

#include "Date.hpp"
#include <string>
#include <sstream>

Date :: Date() {
    clear();
}

Date :: Date(const Date& date_obj) {
    clear();
    this->date.tm_mday = date_obj.date.tm_mday;
    this->date.tm_mon = date_obj.date.tm_mon;
    this->date.tm_year = date_obj.date.tm_year;

}
Date :: Date (int day, int month, int year) {
    try {
        check_date(day, month, year);
        clear();
        this->date.tm_mday = day;
        this->date.tm_mon = month-1;
        this->date.tm_year = year-1900;
    }
    catch(DateException& ex) {
        throw ex;
    }
}

Date :: Date (const string& iso_string) {
    try {
        if(iso_string.size() != 10) {
            throw invalid_argument("Bad formatted string");
        }
        stringstream ss_day;
        stringstream ss_month;
        stringstream ss_year;
        int day;
        int month;
        int year;
        ss_year << iso_string.substr(0,4);
        ss_year >> year;
        ss_month << iso_string.substr(5,2);
        ss_month >> month;
        ss_day << iso_string.substr(8,2);
        ss_day >> day;
        check_date(day, month, year);
        clear();
        this->date.tm_mday = day;
        this->date.tm_mon = month-1;
        this->date.tm_year = year-1900;
    }

    catch(DateException& ex) {
        throw ex;
    }
}

Date::~Date(){
}

string Date :: getDate() const {
    ostringstream ss;
    ss << this->getDay() << "/" << this->getMonth() << "/" << this->getYear();
    return ss.str();
}

int Date :: getDay() const {
    return date.tm_mday;
}

int Date :: getMonth() const {
    return date.tm_mon+1;
}

int Date :: getYear() const  {
    return date.tm_year+1900;
}

void Date :: clear() {
    this->date.tm_sec = 0;
    this->date.tm_min = 0;
    this->date.tm_hour = 1;
    this->date.tm_mday = 1;
    this->date.tm_mon = 0;
    this->date.tm_year = 0;
}

bool Date :: is_leap (int year){
    if( ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0) ) {
        return true;
    }
    else {
        return false;
    }
}

void Date :: check_date (int day, int month, int year){
    if(day < 1)
        throw DateException("Day can't be < 1", DateException::INVALID_FORMAT);
    else if (day > 31)
        throw DateException("Day can't be > 31", DateException::INVALID_FORMAT);
    if(month < 1)
        throw DateException("Month can't be < 1", DateException::INVALID_FORMAT);
    else if(month > 12)
        throw DateException("Month can't be > 12", DateException::INVALID_FORMAT);
    if(year < 1900)
        throw DateException("Year can't be < 1900", DateException::INVALID_FORMAT);
    if( (month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    {
        ostringstream ss;
        ss << "<day, month> = <" << day << ", " << month << "> is not valid. Day must be in [1,30]";
        throw DateException(ss.str(), DateException::INVALID_FORMAT );
    }
    else if( month == 2 && is_leap(year) && day > 29)
    {
        ostringstream ss;
        ss << "<day, month> = <" << day << ", " << month << "> (leap) is not valid. Day must be in [1,29]";
        throw DateException(ss.str(), DateException::INVALID_FORMAT );
    }
    else if( month == 2 && !is_leap(year) && day > 28)
    {
        ostringstream ss;
        ss << "<day, month> = <" << day << ", " << month << "> (not leap) is not valid. Day must be in [1,28]";
        throw DateException(ss.str(), DateException::INVALID_FORMAT );
    }
}

tm Date::rawDate() {
    return date;
}

std::ostream & operator<<(std::ostream &os, Date &a) {
    return os << ' ' << a.date.tm_mday << ' ' << a.date.tm_mon << ' ' << a.date.tm_year;
}