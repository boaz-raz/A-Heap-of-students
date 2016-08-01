//
// Created by Boaz Raz on 7/31/16.
//

#ifndef A_HEAP_OF_STUDENTS_ADDRESS_H
#define A_HEAP_OF_STUDENTS_ADDRESS_H

#include <iostream>


using namespace std;

class address{
private:
    string address1;
    string address2;
    string city;
    string state;
    string zipCode;

public:
    address(); //empty contractor
    virtual ~address();
    void set_address1 (string input);
    void set_address2 (string input);
    void set_city (string input);
    void set_state (string input);
    void set_zip (string input);



    string getAddress1();
    string getAddress2();
    string getCity();
    string getState();
    string getZipCode();



};// end calss


#endif //A_HEAP_OF_STUDENTS_ADDRESS_H
