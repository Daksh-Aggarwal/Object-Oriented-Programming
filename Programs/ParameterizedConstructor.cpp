#include <iostream>
using namespace std;

class Car{
    string brand, model;
    int year;

    public:
    Car(string x = "Placeholder", string y = "Placeholder", int z = 0){ // Constructor is a member function with the same name as the class
        brand = x;
        model = y;
        year = z;
    }
    void view(){
        cout << "Brand: "<< brand << endl;
        cout << "Model: "<< model << endl;
        cout << "Year: "<< year << endl;
    }
};

int main(){
    Car myCar("BMW", "X8", 2025);
    myCar.view();
    return 0;
}