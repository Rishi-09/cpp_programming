#include <iostream>
using namespace std;
// Function
int SumUptoN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter the Number Upto which you want the sum :";
    cin >> num;
    cout << "The sum upto " << num << " is :" << SumUptoN(num) << endl; // Function call
}