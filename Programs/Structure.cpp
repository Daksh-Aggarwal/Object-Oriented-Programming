#include <iostream>
using namespace std;

struct Person{
    int age;
    string name;

    void setAge(int a){
        age = a;
    }

    void setName(string b){
        name = b;
    }
};

int main(){

    Person p1;

    p1.setAge(18);
    p1.setName("NPC");
    cout << "Age: " << p1.age << endl;
    cout << "Name: " << p1.name << endl;

    return 0;
}