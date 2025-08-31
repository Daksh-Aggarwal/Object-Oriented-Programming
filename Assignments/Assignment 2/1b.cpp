#include <iostream>
using namespace std;

class Student {
    public:
    int roll_number;
    string name;
    Student(int a = 0, string b = "default") {
        roll_number = a;
        name = b;
    }
};

Student view(Student std){
    return std;
}

int main(){
    Student std1(1, "John"), copy;
    copy = view(std1);
    cout << copy.roll_number << endl;
    cout << copy.name << endl;
    return 0;
}