#include <iostream>
using namespace std;

class Rectangle {
    float length, breadth;
   public:
    Rectangle(float l = 0, float b = 0) {
        if (b != 0 && l == 0){
            length = b;
        }
        else length = l;
        if (l != 0 && b == 0){
            breadth = l;
        }
        else breadth = b;
    }
    float calcArea(){
        return length * breadth;
    }
    ~Rectangle() {
        cout << "Destructor called." << endl;
    }
};

int main(){
    
    Rectangle r[3] = {
        Rectangle(), Rectangle(5, 10), Rectangle(6)
    };

    cout << r[0].calcArea() << endl;
    cout << r[1].calcArea() << endl;
    cout << r[2].calcArea() << endl;

    return 0;
}