#include <iostream>
using namespace std;

int main(){
    float ctemp, ftemp;

    cout<<"Enter the temperature in Celsius: ";
    cin>>ctemp;

    ftemp = ((float)9/5 * ctemp) + 32;

    cout<<"Temperature in Fahrenheit is "<<ftemp;

    return 0;
}