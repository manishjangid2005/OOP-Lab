#include <iostream>
using namespace std;

class Student {
    public:
    void pubValue() {
        int x = 10;
        }
    private:
    void priValue() {
        int y = 30;
    }
};

int main(int argc, char const *argv[])
{
    Student s1;
    s1.pubValue();
    s1.priValue();
    return 0;
}
