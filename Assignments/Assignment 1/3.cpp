#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 10; i++){
        cout<<"Hi1";
    }
    cout<<"\n";

    int i = 0;
    for(; i<10; i++){
        cout<<"Hi2";
    }
    cout<<"\n";

    i = 0;
    for(; i<10;){
        cout<<"Hi3";
        i++;
    }
    cout<<"\n";

    int j = 0;
    while(j < 10){
        cout<<"Hi4";
        j++;
    }
    cout<<"\n";

    j = 0;
    while(j++ < 10){
        cout<<"Hi5";
    }
    cout<<"\n";

    int k = 0;
    do{
        cout<<"Hi6";
        k++;
    }
    while (k < 10);
    cout<<"\n";

    k = 0;
    do{
        cout<<"Hi7";
    }
    while (k++ < 10);
    cout<<"\n";

    return 0;
}