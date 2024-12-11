/*

1
23
456
78910
1112131415

*/
#include <iostream>
using namespace std;
int main()
{
    int row, count = 1;
    cout << "Enter the Number of Rows :";
    cin >> row;
    // row
    for (int i = 0; i < row; i++)
    { // column
        for (int j = 0; j <= i; j++)
        {
            cout << count;
            count++;
        }
        cout << endl;
    }
}