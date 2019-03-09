#include <iostream>

using namespace std;

class GradeBook{

public:
    void displayMessage(){
        cout<<"Welcome to GradeBook App";
    }


};




int main() {
    GradeBook mygradebook;
    mygradebook.displayMessage();
    return 0;
}