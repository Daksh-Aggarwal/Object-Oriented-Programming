#include <iostream>
using namespace std;

class Student {
    int roll_number;
    string name;
    static int count;

    public:
    void setData(int r, string n){
        roll_number = r;
        name = n;
        count++;
    }

    static void showCount(){
        cout << "No. of students: " << count << endl;
    };
};

int Student::count = 0;

int main(){
    Student s1, s2, s3;
    s1.setData(1, "John");
    s2.setData(2, "James");
    s3.setData(3, "Jane");
    Student::showCount();
    
    return 0;
}