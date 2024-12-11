/*
    1
   121
  12321
 1234321
123454321

*/

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows:";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {   // spaces
        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }
        // half numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // remaining numbers
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << "\n";
    }
}
