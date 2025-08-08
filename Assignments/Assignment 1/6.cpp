#include <iostream>
using namespace std;

class Data{
    int ID;

    void privateFunction(){
        cout<<"Private function called.";
    }

    void setID(int input){
        ID = input;
        cout<<"ID set successfully!";
    }

    public:
    void publicFunction(){
        cout<<"Public function called.\nCalling private function next...\n";
        privateFunction();
    }

    void getID(){
        int user_ID;
        cout<<"\n\nID: ";
        cin>>user_ID;
        setID(user_ID);
    }

};

int main(){
    Data d1;
    d1.publicFunction();
    d1.getID();

    return 0;
}