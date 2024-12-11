#include <iostream>
using namespace std;
// Function
int SumOfDigits(int n)
{
    int sum = 0, r;
    while (n > 0)
    {
        r = n % 10;
        sum += r;
        n /= 10;
    }
    return sum;
}
int main()
{
    cout << "Enter a Number :";
    int num;
    cin >> num;
    cout << "The Sum of the digits of " << num << " is :" << SumOfDigits(num) << endl;
}