
#include <iostream>
#include <vector>
using namespace std;
bool isvalid(vector <int>& arr,int allowedtime,int m)
{	int n = arr.size();
    int painter = 1,time = 0;
	for (int i =0;i<n;i++)
	{
		if(time+arr[i]<=allowedtime)
			time+=arr[i];
		else
			painter++;
			time=arr[i];
	}
	return painter<=m;
}
int PainterPartition(vector <int>& arr,int m)
{	
	int n = arr.size();
	int maxtime=0,ans=-1;
	int maxval = arr[0];
	for(int i = 0;i<n;i++)
	{
		maxtime+=arr[i]; 
		maxval = max(maxval,arr[i]);
	}
	int left = maxval,right = maxtime,mid;

	while(left<=right)
	{
		mid = left + (right-left)/2;
		if(isvalid(arr,mid,m))
		{
			ans = mid;
			right = mid -1;
		}
		else
			left = mid +1 ;
	}
	return ans;
}								

int main()
{
	vector <int> arr;
	int m;
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
	cout << "Enter the number of painters :";
	cin >> m;
	cout << PainterPartition(arr,m) << endl;
	return 0;
}