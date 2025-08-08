#include <iostream>
using namespace std;

struct Student{
    string name, degree, hostel;
    int roll_number;
    float current_CGPA;
    bool hasDetails = false;

    void addDetails(){
        cout<<"Name: ";
        getline(cin, name);
        cout<<"Roll No.: ";
        cin>>roll_number;
        cin.ignore(); 
        cout<<"Degree: ";
        getline(cin, degree);
        cout<<"Hostel: ";
        getline(cin, hostel);
        cout<<"Current CGPA: ";
        cin>>current_CGPA;
        hasDetails = true;
        cout<<"Details added successfully!\n";
    }
    void updateDetails(){
        if (!hasDetails){
            cout<<"No details found!";
        }
        else{
            int updateIndex;
            while (true){
                cout<<"\n\n---MENU---\n1. Name\n2. Roll No.\n3. Degree\n> ";
                cin>>updateIndex;
                if (updateIndex == 1){
                    string new_name;
                    cout<<"Name: ";
                    cin.ignore(); 
                    getline(cin, new_name);
                    name = new_name;
                    cout<<"\nName updated successfully!\n";
                    break;
                }
                else if (updateIndex == 2){
                    int new_roll_number;
                    cout<<"Roll No.: ";
                    cin>>new_roll_number;
                    roll_number = new_roll_number;
                    cout<<"\nRoll No. updated successfully!\n";
                    break;                
                }
                else if (updateIndex == 3){
                    string new_degree;
                    cout<<"Degree: ";
                    cin.ignore(); 
                    getline(cin, new_degree);
                    degree = new_degree;
                    cout<<"\nDegree updated successfully!\n";
                    break;                 
                }
                else {
                    cout<<"Invalid input! Please try again.";
                }
        }
        }
    }
    void updateCGPA(){
        if (!hasDetails){
            cout<<"No details found!";
        }
        else {
            float new_cgpa;
            cout<<"Current CGPA: ";
            cin>>new_cgpa;
            cin.ignore(); 
            current_CGPA = new_cgpa;
            cout<<"\nCGPA updated successfully!\n";
        }
    }
    void updateHostel(){
        if (!hasDetails){
            cout<<"No details found!";
        }
        else {
            string new_hostel;
            cout<<"Hostel: ";
            cin.ignore(); 
            getline(cin, new_hostel);
            hostel = new_hostel;
            cout<<"\nHostel updated successfully!\n";
        }
    }
    void displayDetails(){
        if (!hasDetails){
            cout<<"No details found!";
        }
        else {
            cout<<"\nName: "<<name;
            cout<<"\nRoll No.: "<<roll_number;
            cout<<"\nDegree: "<<degree;
            cout<<"\nHostel: "<<hostel;
            cout<<"\nCurrent CGPA: "<<current_CGPA;
        }
    }
};

int main(){
    int menu_input;
    Student student1;
    while (true){
        cout<<"\n\n---MENU---\n1. Add Details\n2. Update Details\n3. Update CGPA\n4. Update Hostel\n5. Display Details\n6. Exit\n> ";
        cin>>menu_input;
        cin.ignore(); 

        if (menu_input == 1){
            student1.addDetails();
        }
        else if (menu_input == 2){
            student1.updateDetails();
        }
        else if (menu_input == 3){
            student1.updateCGPA();
        }
        else if (menu_input == 4){
            student1.updateHostel();
        }
        else if (menu_input == 5){
            student1.displayDetails();
        }
        else if (menu_input == 6){
            cout<<"Exited successfully!";
            break;
        }
        else {
            cout<<"Invalid input! Please try again.";
        }
    }
    
    return 0;
}