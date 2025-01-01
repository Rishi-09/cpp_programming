#include <iostream>
using namespace std;
#include <vector>
int Majority_event(vector<int> &arr)
{
    int count = 0, ans = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if (count == 0)
            ans = arr[i];
        if (ans == arr[i])
            count++;
        else
            count--;
    }
    return ans;
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
    cout << "Most occuring element is : " << Majority_event(arr) << endl;
}