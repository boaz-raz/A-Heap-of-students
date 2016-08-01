//
// Created by Boaz Raz on 7/31/16.
//

#ifndef A_HEAP_OF_STUDENTS_STUDENT_H
#define A_HEAP_OF_STUDENTS_STUDENT_H

#include <iostream>
#include "address.h"
#include "date.h"

using namespace std;

class student{
private:
    string firstName;
    string lastName;
    string gpa;
    string creditHours;
    address student_address;
    date date_main;
    date completion_date;


public:
    student(); // will be inherited from address class
    virtual ~student();
    void set_firstname (string input);
    void set_lastname (string input);
    void set_gpa (string input);
    void set_creditHours (string input);

    //Getting access to the student address
    void set_student_address(string address_array[]);
    void set_date_main(string date_array[]);
    void set_completion_date(string date_array[] );

    string getfirstName();
    string getlastName();
    string getGpa();
    string getCreditHours();
    address getStudent_address();
    date getDate_main();
    date getCompletion_date();


};// end student class

#endif //A_HEAP_OF_STUDENTS_STUDENT_H
