#include <iostream>
using namespace std;
int linear_search(int arr[],int target)
{
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i =0 ; i<size ; i++)
    {
        if (arr[i]==target)
            return i;
    }
    return -1;
}
int main()
{
    int arr[15],size;
    cout << "enter the number of elements :";
    cin >> size ;
    for (int i =0;i<size ;i++)
    {
        cout << "Enter the element at index " << i << " : ";
        cin >> arr[i];
    }
    cout << "Enter element to search : ";
    int target;
    cin >> target;
    int result = linear_search(arr,target);
    if(result == -1)
        cout << "Task Failed : Element not found.";
    else
        cout << target <<  " found at the index " << result << endl ;  
}