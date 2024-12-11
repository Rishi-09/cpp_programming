#include <iostream>
using namespace std;

// Function
int fact(int n)
{
    if ((n == 0) || (n == 1))
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int num;
    cout << "Enter the number to Calculate Factorial :";
    cin >> num;
    cout << "The Factorial of " << num << " is :" << fact(num) << endl;
}