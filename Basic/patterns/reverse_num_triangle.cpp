/*

1
2 1
3 2 1
4 3 2 1

*/

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows :";
    cin >> row;
    // row
    for (int i = 1; i <= row; i++)
    {
        for (int j = i; j >= 1; j--)
        { // column
            cout << j << " ";
        }
        cout << endl;
    }
}