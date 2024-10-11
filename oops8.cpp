#include <iostream>
using namespace std;

class student{
    char name[20];
    char university[20];
    char branch[5];
    int rollno;
    int marks;

public: 
    void getdetails()
    {
    cout << "Enter your Name : ";
    cin >> name;
    cout << "Enter your University : ";
    cin >> university;
    cout << "Enter your Branch : ";
    cin >> branch;
    cout << "Enter your Roll-No : ";
    cin >> rollno;
    cout << "Enter your Marks : ";
    cin >> marks;
}

void display() {
    cout << "\nName : " << name;
    cout << "\nUniversty : " << university;
    cout << "\nBranch : " << branch;
    cout << "\nRoll-Number : " << rollno;
    cout << "\nMarks : " << marks;
    }
};

int main(int argc, char const *argv[])
{
    student s[3];
    for (int i = 0; i < 4; i++)
    {
        s[i].getdetails();
    }
    for (int i = 0; i < 4; i++)
    {
        s[i].display();
    }
    
    return 0;
}
