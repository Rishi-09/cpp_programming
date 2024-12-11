/*

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of Butterfly :";
    cin >> size;
    // upper  half
    for (int i = 0; i < size; i++)
    {
        // upper left stars
        for (int j = 0; j <= i; j++)
            cout << "*";
        // upper spaces
        for (int j = 0; j < 2 * size - 2 * i - 2; j++)
            cout << " ";
        // upper right stars
        for (int j = 0; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    // lower half
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size- i; j++)
            cout << "*";
        // lower spaces
        for (int j = 0; j < 2 * i; j++)
            cout << " ";
        for (int j = 0; j < size-i; j++)
            cout << "*";
        cout << endl;
    }
}
