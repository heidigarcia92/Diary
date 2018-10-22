//
//  Date.hpp
//  Diary
//
//  Created by Heidi Garcia Canizares on 16/10/18.
//  Copyright © 2018 Heidi Garcia Canizares. All rights reserved.
//

#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;

class Date{
public:
    Date();
    Date(const Date& date_obj);
    Date(int day, int month, int year);
    Date(const string& date);

    string getDate() const;
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    bool operator < (const Date& date_obj);
    bool operator > (const Date& date_obj);
    bool operator == (const Date& date_obj);
    
private:
    int date[3];
    void setDate(int day, int month, int year);
    
};


#endif /* DATE_H */

