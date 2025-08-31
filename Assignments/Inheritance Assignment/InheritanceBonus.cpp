#include <iostream>
using namespace std;

class Employee {
    protected:
    string name;
    double salary;
    void setData(string n, double s){
        name = n;
        salary = s;
    }
};

class Manager: public Employee {
    public:
    double bonus;
    void setDetails(string n, double s, double b){
        setData(n, s);
        bonus = b;
    }
    void displayDetails(){
        cout << name << endl;
        cout << salary + bonus << endl;
    }
};

int main(){
    Manager m1;
    m1.setDetails("John", 50000, 10000);
    m1.displayDetails();
    return 0;
}