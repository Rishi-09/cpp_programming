#include <iostream>
#include <vector>
using namespace std;
void sort012(vector<int> &arr)
{
    int n = arr.size();
    int left = 0,right=n-1,mid=0;
    while(right>=mid)
    {
        if(arr[mid]==0) 
        {
            swap(arr[mid],arr[left]);
            left++;
            mid++;
        }
        else if(arr[mid]==1) mid++;
        else
        {
            swap(arr[mid],arr[right]);
            right--;
        }
        
    }

}
int main()
{
    vector<int> arr;
    int size;
    cout << "Enter number of elements in array : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int val;
        cout << "Enter element at index " << i << " :";
        cin >> val;
        arr.push_back(val);
    }
    sort012(arr);
    cout << "after sorting :";
    for (int i:arr)
    {
        cout << i << " ";
    }
    cout << endl;
}