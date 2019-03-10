//
// Created by K3NN! on 3/9/2019.
//
#include "GradeBook.h"
#include <iostream>
#include <string>

using namespace std;


GradeBook::GradeBook( string name ) {
    setCourseName(name);
}


void GradeBook::setCourseName(string name){
    if(name.length() < 25)
        courseName = name;
    if(name.length() > 25) {
        cout<<"Course Name must not be less than 25"<<endl;
        cout<<"Truncating..."<<endl;
        courseName = name.substr(0, 25);
    }

    }


string GradeBook::getCourseName(){
    return courseName;
    }


    void GradeBook::displayMessage(){
        cout<<"Welcome to "<<getCourseName()<<" Grade Book"<<endl;
    }

    void GradeBook::displayAverage() {
        int total; // sum of grades entered by user
        int grade; // grade value entered by user
        int average; // average of grades
        int gradeCounter;

        total = 0;
        gradeCounter = 1;

        while (gradeCounter <= 10){
            cout<<"Enter Grades"<<endl;
            cin>>grade;
            total = total + grade;
            gradeCounter = gradeCounter + 1;
        }

        average = total/10;

        cout<<"Total Grades is "<<total<<endl;
        cout<<"Average Grade is "<<average<<endl;
}

