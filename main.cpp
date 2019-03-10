#include"GradeBook.h"
#include "GradeBook.cpp"



int main() {
    GradeBook mygradebook1("SBCC");
    string nameOfCourse;
    mygradebook1.displayMessage();
    cout<<endl;
    cout<<"Enter Name of Course: ";
    getline(cin, nameOfCourse);
    mygradebook1.setCourseName(nameOfCourse);
    mygradebook1.displayMessage();
    mygradebook1.displayAverage();
    cout<<endl;
    return 0;
}