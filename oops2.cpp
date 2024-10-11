// Calculator using switch statement

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    char op;
    float num1, num2;

    cout << "Enter operation ";
    cin >> op;
    cout << "Enter operands ";
    cin>> num1 >> num2;

    switch (op){
    case '+':
        cout << num1 + num2;
        break;
    
    case '-':
        cout << num1 - num2;
        break;
    
    case '*':
        cout << num1 * num2;
        break;
    
    case '/':
        cout << num1 / num2;
        break;
    
    default:
    cout << "Error";
        break;
    }
    return 0;
}