/*  row = 4
 *
 * *
 * * *
 * * * * */

#include <iostream>
using namespace std;

int main()
{
    int i, j, row;
    cout << "Enter Number of Rows :";
    cin >> row;
    //row
    for (i = 0; i < row; i++)
    {   //column
        for (j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        cout << "\n";
    }
}
