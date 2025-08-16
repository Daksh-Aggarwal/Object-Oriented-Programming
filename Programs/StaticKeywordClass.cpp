#include <iostream>
using namespace std;

class MyClass {
    public:
      static int x;
      int y;
      int sum() {
        return x + y;
      }
  };
  
  int MyClass::x = 5;
  
  int main() {
    MyClass myObj1;
    myObj1.y = 3;
    MyClass myObj2;
    myObj2.y = 5;
    
    cout << myObj1.sum() << "\n";
    cout << myObj2.sum() << "\n";
    
    return 0;
  }