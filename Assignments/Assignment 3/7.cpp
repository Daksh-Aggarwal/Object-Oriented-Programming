#include <iostream>
using namespace std;

class Class {
    int x = 3, y = 4;
    string a = "hello";
    public:
    friend class friendClass;
};

class friendClass{
    public:
    void displayClass(Class c){
        cout << c.x << endl;
        cout << c.y << endl;
        cout << c.a << endl;
    }
};

int main(){
    Class c;
    friendClass f;
    f.displayClass(c);
 
    return 0;
}