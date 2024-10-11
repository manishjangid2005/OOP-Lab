#include <iostream>
using namespace std;

double power(double n, int p = 2)
{
    double result = 1.0;
    for (int i = 0; i < p; i++)
    {
        result *= n;
    }
    return result;
}

int main()
{
    double num;
    int exponent;

    cout << "Enter a number: ";
    cin >> num;

    char choice;
    cout << "Do you want to provide an exponent? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y')
    {
        cout << "Enter the exponent: ";
        cin >> exponent;
        cout << num << " raised to the power " << exponent << " is: " << power(num, exponent) << endl;
    }
    else
    {
        cout << num << " squared is: " << power(num) << endl;
    }

    return 0;
}
