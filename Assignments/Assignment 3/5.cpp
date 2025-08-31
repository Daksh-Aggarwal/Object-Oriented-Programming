#include <iostream>
using namespace std;

class Class2;

class Class1 {
    int x = 3;
    public:
    friend void swap(Class1 &c1, Class2 &c2);
    void display(){
        cout << x << endl;
    }
};

class Class2 {
    int x = 4;
    public:
    friend void swap(Class1 &c1, Class2 &c2);
    void display(){
        cout << x << endl;
    }
};

void swap(Class1 &c1, Class2 &c2){
    int temp;
    temp = c1.x;
    c1.x = c2.x;
    c2.x = temp;
};

int main(){
    Class1 c1; 
    Class2 c2;

    c1.display();
    c2.display();

    swap(c1, c2);

    c1.display();
    c2.display();

    return 0;
}