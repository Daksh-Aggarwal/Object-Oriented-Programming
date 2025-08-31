#include <iostream>
using namespace std;

class Rectangle {
    float length, breadth;
    public:
    void setData(float l, float b) {
        length = l;
        breadth = b;
    }

    float calcArea(){
        return length * breadth;
    }

    void display(){
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << calcArea() << endl;
    }
};

int main(){
    Rectangle rect[10];

    for(int i = 0; i < 10; i++){
        float l, b;
        char ch;
        cout << "Enter length and breadth of rectangle "<< i + 1 << "(l x b): " << endl;
        cin >> l >> ch >> b;
        rect[i].setData(l, b);
    }

    cout << "\n\n---Rectangle Data---" << endl;
    for(int i = 0; i < 10; i++){
        cout << "Rectangle " << i + 1 << ": " << endl;
        rect[i].display();
        cout << endl;
    }

    return 0;
}