// #include <iostream>
// using namespace std;

// class Student {
//    public:
//    int rollNumber;
//    string name;

//     Student(int a = 1, string b = "placeholder") {
//         rollNumber = a;
//         name = b;
//     }
// };

// class Marks: public Student {
//     public:
//     int marks1, marks2, marks3;
//     Marks(int a, int b, int c, int r, string n) 
//     : Student(r, n), marks1(a), marks2(b), marks3(c) {}

//     int total = marks1 + marks2 + marks3;
//     float percentage = total / 3.0;
// };

// int main(){
//     Marks m1(100, 100, 100, 1, "John");
//     cout << "Name: " <<m1.name << "\nRoll Number: " << m1.rollNumber << endl;
//     cout << "Total: "<< m1.total << endl;
//     cout << "Percentage: " << m1.percentage << "%" << endl;

 
//     return 0;
// }

#include <iostream>
using namespace std;

class Student {
   public:
   int rollNumber;
   string name;

   void setDetails(int r, string n){
        rollNumber = r;
        name = n;
   }
};

class Marks: public Student {
    public:
    float marks1, marks2, marks3;
    Marks(float a = 0, float b = 0, float c = 0) {
        marks1 = a;
        marks2 = b;
        marks3 = c;
    }
    float getTotal() {
        return marks1 + marks2 + marks3;
    }
    
    float getPercentage() {
        return getTotal() / 3.0f;
    }    
};

int main(){
    Marks s1(100, 100, 100);
    s1.setDetails(1, "John");
    cout << "Name: " << s1.name << "\nRoll Number: " << s1.rollNumber << endl;
    cout << "Total: "<< s1.getTotal() << endl;
    cout << "Percentage: " << s1.getPercentage() << "%" << endl;

    return 0;
}