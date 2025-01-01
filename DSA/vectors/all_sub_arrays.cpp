#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> arr = {2,3,6,2,8,4};
    for(int i = 0 ; i < arr.size() ; i++)
    {
        for(int j= i ; j < arr.size() ; j++)
        {
            for(int k = i ; k <=j;k++)
            {
                cout << arr[k];
            }
            cout << " ";
        }
        cout << endl;
    }
}