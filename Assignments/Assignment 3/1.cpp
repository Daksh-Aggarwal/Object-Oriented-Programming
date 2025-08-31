#include <iostream>
using namespace std;

class Rectangle {
    float length, breadth;
   public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }
    Rectangle(float x) {
        length = x;
        breadth = x;
    }
    float calcArea(){
        return length * breadth;
    } 
};

int main(){
    Rectangle r1, r2(2, 3), r3(4);
    cout << r1.calcArea() << endl;
    cout << r2.calcArea() << endl;
    cout << r3.calcArea() << endl;

    return 0;
}