//
// Created by K3NN! on 3/9/2019.
//

#ifndef GRADEBOOK_GRADEBOOK_H
#define GRADEBOOK_GRADEBOOK_H
#include <iostream>
#include <string>

using namespace std;

class GradeBook{


private:
    string courseName;



public:
    GradeBook(string name);
    void setCourseName(string);
    string getCourseName();
    void displayMessage();


};
#endif //GRADEBOOK_GRADEBOOK_H
