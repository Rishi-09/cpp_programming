#include <iostream>
using namespace std;

int main()
{
    int i,j,k,n=5;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i)/2;j++)
        {
            cout << " "; 
        }
        for(k=1;k<=i;k++)
        {
            cout << i;
        }
    cout << "\n";
    }    
}

