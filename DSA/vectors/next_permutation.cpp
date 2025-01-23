#include <iostream>
#include <vector>
using namespace std;
void NextPermutation(vector<int>& nums)
{
    int pivot =-1,n=nums.size();
    for(int i=n-2;i>=0;i--)
    {
        if(nums[i]<nums[i+1])
        {
            pivot=i;
            break;
        }
    }
    if(pivot==-1)
    {   int i = 0,j=n-1;
        while(i<=j)
    {
        swap(nums[i],nums[j]);
        i++;j--;
    }
        return ;
    }
    for(int i= n-1;i>pivot;i--)
    {
        if(nums[i]>nums[pivot])
        {
            swap(nums[i],nums[pivot]);
            break;
        }
    }
    int i=pivot+1,j=n-1;
    while(i<=j)
    {
        swap(nums[i],nums[j]);
        i++;j--;
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
    NextPermutation(arr);
    for (int i:arr)
    {
        cout << i<<" ";
    }
    cout << endl;
}