#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the Number of Rows :";
    cin >> row;
    int i,j;
    for (i=0;i<row;i++)
    {
        for(j=1;j<=row;j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}