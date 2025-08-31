#include <iostream>
using namespace std;

class Vehicle {
    protected:
    string brand, model;
    public:
    void setData(string b, string m){
        brand = b;
        model = m;
    }
};

class Car: public Vehicle {
    public:
    int seatingCapacity;
    string fuelType;
    void setExtraDetails(int n, string t){
        seatingCapacity = n;
        fuelType = t;
    }
    void displayDetails(){
        cout << brand << endl;
        cout << model << endl;
        cout << seatingCapacity << endl;
        cout << fuelType << endl;
    }
};

int main(){
    Car c1;
    c1.setData("BMW", "X5");
    c1.setExtraDetails(5, "Petrol");
    c1.displayDetails();
 
    return 0;
}