//
// Created by Boaz Raz
//

#include "date.h"

void date::set_month (string month){
    this->month = month;
}
void date::set_day(string day){
    this->day = day;
}
void date::set_year(string year){
    this->year = year;
}
string date::getMonth(){
    return month;
}
string date::getDay(){
    return day;
}
string date::getYear(){
    return year;
}
date::date(){

}
date::~date(){

}
