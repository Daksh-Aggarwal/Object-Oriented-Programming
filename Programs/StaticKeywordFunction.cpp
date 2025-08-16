#include <iostream>
using namespace std;
int add(int myNumber) {
    static int total = 0;
    total += myNumber;
    return total;
  }

int main(){
        cout << add(5) << "\n";
        cout << add(2) << "\n";
        cout << add(4) << "\n";
        cout << add(9) << "\n";

    return 0;
}