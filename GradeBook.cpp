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

