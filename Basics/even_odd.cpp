#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Number :";
    cin >> num;
    
    if (num%2==0)
        cout << num  << " is even.\n";
    else
        cout << num << " is odd.\n";
    return 0;
}