// Find a factorial of a number

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long fact = 1.0;
    int n;

    cout << "Enter a number ";
    cin >> n;

    if (n < 0)
    {
        cout << "Error";

    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            fact *= i;
        }
        cout << "Factorial of " << n << "=" << fact;
    }
    
    return 0;
}
