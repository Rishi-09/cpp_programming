#include <iostream>
#include <vector>
using namespace std;
int MaxArea(vector<int> &height)
{
    int maxarea = 0, left = 0, right = height.size() - 1,area;
    while(left<right)
    {
        area = (right-left)*min(height[left],height[right]);
        maxarea=max(area,maxarea);
        height[left]<height[right]?left++:right--;
    }
    return maxarea;
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
    cout << "Max area is :" << MaxArea(arr) << endl;
}