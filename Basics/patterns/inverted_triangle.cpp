#include <iostream>
using namespace std;
int main()
{
    int row,count=1;
    cout << "Enter the Number of Rows :";
    cin >> row;
    for(int i=1;i<=row;i++)
    {   for(int k=1;k<=i;k++)
        {
            cout << " ";
        }
        for(int k=0;k<row-i+1;k++)
        {
            cout << i ;
        }
        
        cout << endl ;
    }
}