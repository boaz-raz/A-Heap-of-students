/*
 * main.cpp
 *
 *  Created on: Mar 5, 2011
 *      Author: boazraz
 *      the order for the  array fName, lName, gpa, cHoures, address1, address2 ,city, state,zip, month, day, year  = 12
 */
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include "student.h"
#include "date.h"
#include "address.h"

using namespace std;

void printStudent(student *s1, int counter); // calling the print student method
void simplerList(student *s1, int counter); // calling the print student method
void sorting(student *s1, int counter); // calling the sort student method

int main() {
    //reading from a file
    ifstream inFile;
    inFile.open("students.dat");
    string item;
    int counter = 0;
    student *s1 = new student[50];
    string address_array[5]; // array for the address
    string date_array[3];
    int menu;
    int input; // input for the menu

    // add delete contractor
    while (!inFile.eof()) {
        // get first name
        getline(inFile, item, '|');
        s1[counter].set_firstname(item);

        // get last name
        getline(inFile, item, '|');
        s1[counter].set_lastname(item);

        getline(inFile, address_array[0], '|');
        getline(inFile, address_array[1], '|');
        getline(inFile, address_array[2], '|');
        getline(inFile, address_array[3], '|');
        getline(inFile, address_array[4], '|');

        s1[counter].set_student_address(address_array);

        getline(inFile, date_array[0], '|');
        getline(inFile, date_array[1], '|');
        getline(inFile, date_array[2], '|');

        s1[counter].set_date_main(date_array);

        // setting the completion (month, day, year)
        getline(inFile, date_array[0], '|');
        getline(inFile, date_array[1], '|');
        getline(inFile, date_array[2], '|');
        s1[counter].set_completion_date(date_array);

        // get GPA filed
        getline(inFile, item, '|');
        s1[counter].set_gpa(item);

        // get Credit hours
        getline(inFile, item);
        s1[counter].set_creditHours(item);

        counter++;
    } // end while
    // close file
    inFile.close();

    //welcome message
    cout << "Welcome to students data info software" << endl;
    cout << "Please select one of the options below to get info" << endl
         << endl;

    bool keepgoing = true;
    while (keepgoing) {
        menu++;
        // menu content
        cout << "==> Press 0 to exit the program" << endl;
        cout << "==> Press 1 to List all data for all students" << endl;
        cout
                << "==> Press 2 to print simpler list only the last and first name"
                << endl;
        cout
                << "==> Press 3 to Output a list of student names in alphabetical order"
                << endl;
        cin >> input;

        // switch function to manipulate input user
        switch (input) {
            case 0:
                keepgoing = false;
                break;
            case 1:
                printStudent(s1, counter);
                break;
            case 2:
                simplerList(s1, counter);
                break;
            case 3:
                sorting(s1, counter);
                printStudent(s1, counter); // calling again the to student print function
        }

    }// end switch while loop

    //message when exiting the program
    cout << "Thank you for using the student data program " << endl;
    cout << "Created by Boaz Raz" << endl;
    return 0;

    delete[] s1; // delete the student array
} // end main

void printStudent(student *s1, int counter) {
    // for loop to get all of the student info form the array
    int i;

    for (i = 0; i < counter; i++) {
        cout << s1[i].getfirstName();
        cout << " | " << s1[i].getlastName();
        cout << " | " << s1[i].getStudent_address().getAddress1();
        cout << " | " << s1[i].getStudent_address().getAddress2();
        cout << " | " << s1[i].getStudent_address().getCity();
        cout << " | " << s1[i].getStudent_address().getState();
        cout << " | " << s1[i].getStudent_address().getZipCode();
        cout << " | " << s1[i].getDate_main().getMonth();
        cout << " | " << s1[i].getDate_main().getDay();
        cout << " | " << s1[i].getDate_main().getYear();
        cout << " | " << s1[i].getCompletion_date().getMonth();
        cout << " | " << s1[i].getCompletion_date().getDay();
        cout << " | " << s1[i].getCompletion_date().getYear();
        cout << " | " << s1[i].getGpa();
        cout << " |" << s1[i].getCreditHours();
        cout << endl;

    } // end for loop

}// end print student

// method to print only the last and first name of the student
void simplerList(student *s1, int counter) {
    int i;
    for (i = 0; i < counter; i++) {
        cout << "|" << s1[i].getlastName();
        cout << "|" << s1[i].getfirstName();
        cout << endl;
    }
}// end simple List

//  sorting function
void sorting(student *s1, int counter) {
    int j = 0, i = 0;
    student c; //Temporary object
    // n times
    for (i = 0; i < counter; i++) {
        for (j = 0; j < counter - 1; j++) {

            // comparing between two objects in the student array
            if (s1[j].getfirstName() > s1[j + 1].getfirstName()) {
                // Swapping the objects in the student array after comparing the two
                c = s1[j];
                s1[j] = s1[j + 1];
                s1[j + 1] = c;
            }//end if
        }// end for n-1 times
    }// end for n times

}// end sorting function

