#include <iostream>
using namespace std;

class Student {
   public:
    ~Student() {
        cout << "Destructor called." << endl;    
    }
    // Second destructor which is not allowed
   ~Student() {
        cout << "Destructor called again." << endl;
   }
   // Destructor with parameters which is not allowed
   ~Student(int x) {
        cout << "Destructor called." << endl;
   }
   // Destructors do not have a return type
   int ~Student() {
        cout << "Destructor called." << endl;
   }
};

int main(){
    Student s1;

    return 0;
}