#include <iostream>
using namespace std;

class Complex{
    float real, imaginary;

    public:
    void set(float input_real, float input_imaginary){
        real = input_real;
        imaginary = input_imaginary;
    }
    void display(){
        cout<<real<<" + "<<imaginary<<"i";
    }
    Complex sum(Complex c2){
        Complex result;
        result.set(real + c2.real, imaginary + c2.imaginary);
        return result;
    }
};

int main(){
    Complex c1, c2, c3;
    c1.set(2, 3);
    c2.set(3, 4);
    c3 = c1.sum(c2);
    c3.display();
    
    return 0;
}