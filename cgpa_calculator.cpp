#include <bits/stdc++.h>
using namespace std;
struct Student {
    int rollNo;
    string password;
    int age;
    string name;
    // Student(int rollNo_, string password_, int age_, string name_){
    //     rollNo = rollNo_;
    //     password = password_;
    //     age = age_;
    //     name = name_;
    // }

};
vector<Student> AllStudents;

void ViewAllStudents(){
    cout<<"All Students\n";
    for(int i = 0; i<AllStudents.size(); i++){
        cout<<i<<". "<<AllStudents[i].name<<"\n";
    }

}

void ViewOneStudent(){
    ViewAllStudents();
    cout<<"\nGive serial no of the student you wish to see details of: ";
    int serialNumber;
    cin>>serialNumber;
    cin.ignore();
    if (serialNumber< AllStudents.size()){

    cout<<"Here are all the details about "<<AllStudents[serialNumber].name<<"\n";
    cout<<"Name: "<<AllStudents[serialNumber].name<<"\n";
    cout<<"Age: "<<AllStudents[serialNumber].age<<"\n";
    cout<<"Roll No. : "<<AllStudents[serialNumber].rollNo<<"\n";
    }
    else{
        cout<<"Invalid Choice\n";
    }
}

void AddNewStudent(){
    struct Student newStudent;

    cout<<"\nName: ";
    getline(cin, newStudent.name);
    cin.ignore();

    cout<<"\age: ";
    cin>>newStudent.age;
    cin.ignore();

    cout<<"\nRoll Number: ";
    cin>>newStudent.rollNo;
    cin.ignore();

    cout<<"\nPassword: ";
    getline(cin, newStudent.password);
    cin.ignore();


    AllStudents.push_back(newStudent);
}

void RemoveStudent(){
    ViewAllStudents();
    cout<<"Serial number of student that you wann delete: ";
    int i;
    cin>>i;
    cin.ignore();
    if(i<AllStudents.size()){
        AllStudents.erase(AllStudents.begin()+i);
        ViewAllStudents();
    }
    else{
        cout<<"Nothing deleted";
    }
}



void functionality(){
    while(1){

    cout<<"\n\nWhat would you like to do?\n";
    cout<<"1. View all Student \n";
    cout<<"2. View one Student \n";
    cout<<"3. Add new Student \n";
    cout<<"4. Remove a Student \n";
    cout<<"5. Quit Programme \n";
    cout<<"Choose a Serial number from above: ";
    int userChoice;
    cin>>userChoice;
    cin.ignore();
    switch (userChoice)
    {
    case 1:
        ViewAllStudents();
        break;
    
    case 2:
        ViewOneStudent();
        break;
    
    case 3:
        AddNewStudent();
        break;
    
    case 4:
        RemoveStudent();
        break;
    
    case 6:
        exit(0);
        break;
    
    default:
        break;
    }
    }
}

int main(){
    cout<<"\n~~~~~~Welcome to CGPA Calculator~~~~~~\n";
    functionality();
    return 0;
}