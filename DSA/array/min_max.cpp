#include <iostream>
using namespace std;
int main()
{
	int size;
    cout << "Enter the number of elements :";
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout << "Enter thr value at index " << i << ":";
        cin >> arr[i];
    }
    int min=0;
    for(int i=0;i<size;i++)
    {
        if (arr[min]>arr[i])
            min = i;
    }
    cout << "The minimum value is " << arr[min] << " at index "<< min << endl;
    int max=0;
    for(int i=0;i<size;i++)
    {
        if (arr[max]<arr[i])
            max = i;
    }
    cout << "The maximum value is " << arr[max] << " at index "<< max << endl;
    return 0;
}
