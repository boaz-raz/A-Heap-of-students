//
// Created by Boaz Raz
//

#ifndef A_HEAP_OF_STUDENTS_DATE_H
#define A_HEAP_OF_STUDENTS_DATE_H
#include <iostream>

using namespace std;

class date{
private:
    string month;
    string day;
    string year;

public:
    date();
    virtual ~date();
    void set_month (string input);
    void set_day (string input);
    void set_year (string input);

    string getMonth();
    string getDay();
    string getYear();

};// end class



#endif //A_HEAP_OF_STUDENTS_DATE_H
