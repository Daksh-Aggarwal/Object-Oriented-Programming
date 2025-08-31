#include <iostream>
using namespace std;

class Rectangle {
    float length, breadth;
   public:
    void setData(float l = 0, float b = 0) {
        length = l;
        breadth = b;
    }
    float area(){
        return length * breadth;
    }
};

int main(){
    int n;
    cout << "Enter no. of rectangles: ";
    cin >> n;

    Rectangle* r = new Rectangle[n];
    for(int i = 0; i < n; i++){
        float length, breadth;
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the breadth: ";
        cin >> breadth;
        r[i].setData(length, breadth);
        cout << "Area: " << r[i].area() << endl;
        cout << endl;
    }

    delete[] r;
    
    return 0;
}