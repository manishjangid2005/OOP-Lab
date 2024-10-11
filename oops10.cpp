
#include <iostream>
#include <string>

class Student
{

private:
    std::string name;
    int age;

public:
    Student()
    {
        name = "Manish Jangid";
        age = 19;
    }
    Student(std::string n, int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        std::cout << "\nName: "<< name << ", Age: " << age << std :: endl;
    }
};

int main()
{
    Student studentl;
    Student student2("Aman Tanwar", 20);
    studentl.display();
    student2.display();
    return 0;
}
