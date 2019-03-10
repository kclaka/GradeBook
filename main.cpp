#include <iostream>
#include <string>

using namespace std;

class GradeBook{

    private:
        string courseName;



    public:
        void setCourseName(string name){
        courseName = name;
    }

    string getCourseName(){
        return courseName;

    }
    void displayMessage(){
        cout<<"Welcome to "<<getCourseName()<< " GradeBook App";
    }


};



int main() {
    GradeBook mygradebook;
    string nameOfCourse;
    cout<<"Enter Name of Course";
    getline(cin, nameOfCourse);
    mygradebook.setCourseName(nameOfCourse);
    mygradebook.displayMessage();
    cout<<endl;
    return 0;
}