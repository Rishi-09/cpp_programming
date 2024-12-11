/*
     *
    * *
   *   *
  *     *
 *       *
  *     *
   *   *
    * *
     *

*/

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of Hollow Daimond :";
    cin >> size;
    // upper half
    for (int i = 0; i < size; i++)
    {
        // vertcal half
        // spaces
        for (int j = 0; j < size - i; j++)
        {
            cout << " ";
        }
        // *
        cout << "*";
        // remaining vertical half
        if (i != 0)
        {
            // spaces
            for (int j = 0; j < (2 * i) - 1; j++)
            {
                cout << " ";
            }
            // *
            cout << "*";
        }
        cout << endl;
    }
    // lower half
    for (int i = 0; i < size - 1; i++)
    {
        // vertical half
        // spaces
        for (int j = 0; j <= i + 1; j++)
        {
            cout << " ";
        }
        // *
        cout << "*";
        // remaining vertical half
        if (i < size - 2)
        {
            // spaces
            for (int j = 0; j < 2 * (size - 2 - i) - 1; j++)
            {
                cout << " ";
            }
            // *
            cout << "*";
        }
        cout << endl;
    }
}