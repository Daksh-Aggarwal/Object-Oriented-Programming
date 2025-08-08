#include <iostream>
using namespace std;

class Person{
    int age; // Everything before public is private
    public: //  Default is private
    void setAge(int a){
        age = a;
    }
    void display(){
        cout << "Age: "<< age << endl;
    }
};

int main(){
    Person p1;
    p1.setAge(18);
    p1.display();
    // cout << p1.age << endl; Error as age is private

    return 0;
}