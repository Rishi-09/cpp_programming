/*
 1111
  222
   33
    4
*/

#include <iostream>
using namespace std;
int main()
{
    int row, count = 1;
    cout << "Enter the Number of Rows :";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {   // spaces
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }
        // numbers
        for (int k = row; k >= i; k--)
        {
            cout << i;
        }

        cout << endl;
    }
}