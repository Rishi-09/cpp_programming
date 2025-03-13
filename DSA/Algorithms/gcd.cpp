#include <iostream>
using namespace std;
int gcd(int num1, int num2)
{
    while (num1 > 0 && num2 > 0)
    {
        if (num1 > num2)
            num1 = num1 % num2;
        else
            num2 = num2 % num1;
    }
    if (num1==0)
     return num2;
    return num1;
}
int main()
{
    int num1, num2;
    cout << "Enter the first number :";
    cin >> num1;
    cout << "Enter the second number :";
    cin >> num2;
    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
    return 0;
}