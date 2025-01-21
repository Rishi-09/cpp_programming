#include <iostream>
#include <vector>
using namespace std;
void InsertionSort(vector<int> &arr)
{
    int size = arr.size();
    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int prev = i - 1;
        while (arr[prev] > current && prev >= 0)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = current;
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
    InsertionSort(arr);
    cout << "after sorting :";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}