#include <iostream>
using namespace std;

class Rectangle {
    float length, breadth;
    public:
    void setData(float length = 0, float breadth = 0) {
        this->length = length;
        this->breadth = breadth;
    }
    float area(){
        return this->length * this->breadth;
    }
};

int main(){
    Rectangle r1;
    r1.setData(2, 3);
    cout << r1.area() << endl;

    Rectangle *r2 = new Rectangle;
    r2->setData(5, 6);
    cout << r2->area() << endl;

    delete r2;

    return 0;
}