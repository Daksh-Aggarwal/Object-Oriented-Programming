#include <iostream>
using namespace std;

class Class2;

class Class1 {
    int x = 3;
    public:
    friend int add(Class1, Class2);
};

class Class2 {
    int x = 4;
    public:
    friend int add(Class1, Class2);
};

int add(Class1 c1, Class2 c2){
    int sum = c1.x + c2.x;
    return sum;
};

int main(){
    Class1 c1; 
    Class2 c2;
    cout << add(c1, c2) << endl;

    return 0;
}