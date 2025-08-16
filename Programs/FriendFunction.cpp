#include <iostream>
using namespace std;

class Employee{
    int salary;
    public:
    Employee(int s) {
        salary = s;
    }
    friend void showSalary(Employee emp);
};

void showSalary(Employee emp){
    cout << emp.salary << endl;
}

int main(){
    Employee employee1(20000);
    showSalary(employee1);
 
    return 0;
}