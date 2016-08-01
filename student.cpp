//
// Created by Boaz Raz
//

#include "student.h"


void student::set_firstname (string Name)
{
    this->firstName = Name ;
}
void student::set_lastname(string lName){
    this->lastName = lName ;
}
void student::set_gpa (string gpa){
    this->gpa = gpa;
}
void student::set_creditHours(string credit){
    this->creditHours = credit;

}
string student::getfirstName(){
    return firstName;
}
string student::getlastName(){
    return lastName;
}
string student::getGpa(){
    return gpa;
}
string student::getCreditHours(){
    return creditHours;
}

date student::getDate_main (){
    return date_main;
}

date student::getCompletion_date (){
    return completion_date;
}
address student::getStudent_address(){
    return student_address;
}

//setting the student address
void student::set_student_address(string address_array[])
{
    this->student_address.set_address1(address_array[0]);
    this->student_address.set_address2(address_array[1]);
    this->student_address.set_city(address_array[2]);
    this->student_address.set_state(address_array[3]);
    this->student_address.set_zip(address_array[4]);
}

void student::set_date_main(string date_array[]){
    this->date_main.set_month(date_array[0]);
    this->date_main.set_day(date_array[1]);
    this->date_main.set_year(date_array[2]);

}
void student::set_completion_date(string date_array[]){
    this->completion_date.set_month(date_array[0]);
    this->completion_date.set_day(date_array[1]);
    this->completion_date.set_year(date_array[2]);
}
student::student(){

}
student::~student(){

}
