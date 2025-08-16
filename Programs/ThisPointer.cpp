#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

    public:
    Student(int roll, string name) {
        this->roll = roll;
        this->name = name;
    }
};

int main(){
    Student james(1, "james");
 
    return 0;
}