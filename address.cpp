//
// Created by Boaz Raz
//

#include "address.h"

void address::set_address1(string ad1){
    this->address1 = ad1;
}
void address::set_address2(string ad2){
    this->address2 = ad2;
}
void address::set_city(string city){
    this->city = city;
}
void address::set_state (string state){
    this->state = state;
}
void address::set_zip(string zip){
    this->zipCode = zip;
}
string address::getAddress1(){
    return address1;
}
string address::getAddress2(){
    return address2;
}
string address::getCity(){
    return city;
}
string address::getState(){
    return state;
}
string address::getZipCode(){
    return zipCode;
}
address::address(){

}
address::~address(){

}