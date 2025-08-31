#include <iostream>
using namespace std;

class Student {
    int roll_number;
    string name;
    public:
    void setData(int r, string n){
        roll_number = r;
        name = n;
    }

    void display() const{
        // roll_number = 30;
        cout << "Roll Number: " << roll_number << "\nName: " << name << endl;
    }

};

int main(){
    Student s1;
    s1.setData(1, "John");
    s1.display();
    
    return 0;
}
