#include <iostream>
using namespace std;

class Vehicle {
    public:
    string brand;
    void setBrand(string x){
        brand = x;
    }
    void honk(){
        cout << "Beep!" << endl;
    }
};

class Car: public Vehicle{
    public: 
    string model;
    Car(string x){
        model = x;
    }
    void displayDetails(){
        cout << "Model: " << model << endl;
        cout << "Brand: " << brand << endl;
    }
};

int main(){
    Car car1("X5");
    car1.setBrand("BMW");  
    cout << car1.model << endl;
    cout << car1.brand << endl;
    
    car1.displayDetails();
    car1.honk();

    return 0;
}