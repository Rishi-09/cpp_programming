#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of Hollow Daimond :";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            cout << " ";
        }
        cout << "*";
        if(i!=0){
            for (int j = 0; j < (2 * i) - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for(int i=0;i<size-1;i++){
        for(int j=0;j<=i+1;j++)
        {
            cout << " ";
        }
        cout << "*";
        if(i<size-2){
            for (int j =0;j<2*(size-2-i)-1;j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl ;
    }
}