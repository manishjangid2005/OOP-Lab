// Swap two numbers
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, z, t;
    cout<<"Enter x value ";
    cin>>x;
    
    cout<<"Enter z value ";
    cin>>z;

    t = x;
    x = z;
    z = t;

    cout<< "x = " << x;
    cout<< "\nz = " << z;
    return 0;
}
