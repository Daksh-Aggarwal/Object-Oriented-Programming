#include <iostream>
using namespace std;

class Student {
    int roll_number;
    string name;
    public:
    void setData(int a, string b);
    void display();
};

void Student :: setData(int a, string b){
    roll_number = a;
    name = b;
}

void Student :: display(){
    cout << "Name: "<< name << endl;
    cout << "Roll Number: " << roll_number << endl;
}

int main(){
    Student s1;
    s1.setData(1, "Steve");
    s1.display();
 
    return 0;
}