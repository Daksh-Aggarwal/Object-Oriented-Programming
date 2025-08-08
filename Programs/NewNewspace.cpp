#include <iostream>
using namespace std;

namespace a{
    int num = 5;
}

namespace b{
    int num = 10;
}

int main(){
    cout << b::num << endl;

    using namespace a;
    cout << num << endl;

    return 0;
}