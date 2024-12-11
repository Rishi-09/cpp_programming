#include <iostream>
using namespace std;

// Function which returns a minimum value
double min(double a, double b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    double num1,num2;
    cout << "Enter First Number : ";
    cin >> num1;
    cout << "Enter Second Number : ";
    cin >> num2;
    cout << "The Minimum of given numers is :" << min(num1,num2) << endl ; // Funciton call in a output statement
    return 0;
}