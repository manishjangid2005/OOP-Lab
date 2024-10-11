#include <iostream>
using namespace std;

class employee{
    char emp_name[20];
    int emp_id;
    int salary;
    int desk_num;

public: 
    void getdata() {
    cout << "Enter your Employee Name : ";
    cin >> emp_name;
    cout << "Enter your Employee Id : ";
    cin >> emp_id;
    cout << "Enter your Employee Salary : ";
    cin >> salary;
    cout << "Enter your Employee Desktop Number : ";
    cin >> desk_num;
}

void display() {
    cout << "\nEmployee Name : " << emp_name;
    cout << "\nEmployee Id : " << emp_id;
    cout << "\nEmployee Salary : " << salary;
    cout << "\nEmployee Desktop Number : " << desk_num;
    }
};

int main(int argc, char const *argv[])
{
    employee e1;
    e1.getdata();
    e1.display();
    return 0;
}
