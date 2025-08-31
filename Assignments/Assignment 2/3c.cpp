#include <iostream>
using namespace std;

class Car {
    public:
    static string brand;
};

string Car::brand = "BMW";

int main(){
    cout << Car::brand << endl;
 
    return 0;
}