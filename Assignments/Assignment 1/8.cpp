#include <iostream>
using namespace std;

namespace a{
    int num = 5;
    void print(){
        cout<<"Hello from a!";
    }
}

namespace b{
    int num = 10;
    void print(){
        cout<<"Hello from b!";
    }
}

int main(){
    cout << b::num << endl;
    b::print();
    cout<<"\n";

    using namespace a;
    cout << num << endl;
    print();

    return 0;
}