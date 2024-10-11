#include <iostream>
using namespace std;

class student{
    char name[20];
    char university[20];
    int rollno;
    char sec;
    int marks;

public: 
    void getch()
    {
    cout << "Enter your Name : ";
    cin >> name;
    cout << "Enter your University : ";
    cin >> university;
    cout << "Enter your Roll-No : ";
    cin >> rollno;
    cout << "Enter your Section : ";
    cin >> sec;
    cout << "Enter your Marks : ";
    cin >> marks;
}

void display() {
    cout << "\nName : " << name;
    cout << "\nUniversty : " << university;
    cout << "\nRoll-Number : " << rollno;
    cout << "\nSection : " << sec;
    cout << "\nMarks : " << marks;
    }
};

int main(int argc, char const *argv[])
{
    class student s;
    s.getch();
    s.display();
    return 0;
}
