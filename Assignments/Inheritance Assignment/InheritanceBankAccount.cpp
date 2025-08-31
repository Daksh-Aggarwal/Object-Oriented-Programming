#include <iostream>
using namespace std;

class Account {
   protected:
   int accountNumber; 
   float balance;
   public:
    Account(int a, float b) {
        accountNumber = a;
        balance = b;
    }
};

class SavingsAccount: public Account {
    protected:
    float interestRate, time;
    public:
    SavingsAccount(int a, float b)
    : Account(a, b) {}
    void setData(float i, float t){
        interestRate = i;
        time = t;
    }
    float calcInterest(){
        float interest;
        interest = (balance * interestRate * time) / 100; 
        return interest;
    }
};

int main(){
    SavingsAccount s1(1234, 50000);
    s1.setData(10, 1);
    float interest = s1.calcInterest();
    cout << "Simple interest is " << interest << endl;

    return 0;
}