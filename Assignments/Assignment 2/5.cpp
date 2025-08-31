#include <iostream>
using namespace std;

int salary = 50000;

class Employee {
    public:
    static int salary;
};

int Employee::salary = 10000;

int main(){
    int salary = 30000;
    cout << "Global: " << ::salary << endl;
    cout << "Local: " << salary << endl;
    cout << "Static public member variable: " << Employee::salary << endl;
    return 0;
}