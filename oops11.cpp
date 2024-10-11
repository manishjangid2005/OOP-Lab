#include <iostream>
#include <string>

using namespace std;

class Student {
    int rollNo;
    string name;
    double fee;

public:
    // Parameterized constructor
    Student(int r, string n, double f) : rollNo(r), name(n), fee(f) {}

    // Copy constructor
    Student(const Student &s) {
        rollNo = s.rollNo;
        name = s.name;
        fee = s.fee;
        cout << "Copy Constructor Called" << endl;
    }

    // Function to display student details
    void display() const {
        cout << "Roll No: " << rollNo << ", Name: " << name << ", Fee: " << fee << endl;
    }
};

int main() {
    // Create a student object using the parameterized constructor
    Student student1(57, "Manish Jangid", 92000);
    student1.display();

    // Create another student object using the copy constructor
    Student student2 = student1;
    student2.display();

    return 0;
}
