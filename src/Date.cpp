//
//  Date.cpp
//  Diary
//
//  Created by Heidi Garcia Canizares on 16/10/18.
//  Copyright © 2018 Heidi Garcia Canizares. All rights reserved.
//

#include "Date.hpp"
#include <string>

#define DD 0
#define MM 1
#define YY 2

Date :: Date(){
    setDate(01,01,1970);
}

Date :: Date (int d, int m, int y){
    setDate(d, m, y);
}
Date :: Date (const string& date){
    int day = 0;
    day = date.at(0) - '0';
    day*=10;
    day+=date.at(1)-'0';
    int month = 0;
    month = date.at(3) - '0';
    month*=10;
    month+=date.at(4)-'0';
    int year = 0;
    year = date.at(6) - '0';
    year*=10;
    year+=date.at(7)-'0';
    year*=10;
    year+=date.at(8)-'0';
    year*=10;
    year+=date.at(9)-'0';
    setDate(day, month, year);
}

Date :: Date (const Date& date_obj){
    setDate (date_obj.getDay(), date_obj.getMonth(), date_obj.getYear());
}

int Date :: getDay() const{
    return date[DD];
}

int Date :: getMonth() const{
    return date[MM];
}

int Date :: getYear() const{
    return date[YY];
}

string Date :: getDate() const {
    string data = to_string(getDay()) + "/" + to_string(getMonth()) + "/" + to_string(getYear());
    return data;
}

bool Date :: operator < (const Date& date_obj){
    return getDate().compare(date_obj.getDate()) < 0;
}

bool Date :: operator > (const Date& date_obj){
    return getDate().compare(date_obj.getDate()) > 0;
}

bool Date :: operator == (const Date& date_obj){
    return getDate().compare(date_obj.getDate()) == 0;
}

void Date :: setDate(int day, int month, int year){
    date [DD] = day;
    date [MM] = month;
    date [YY] = year;
}



