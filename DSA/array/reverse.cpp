#include <iostream>
using namespace std;
void rev_arr(int arr[],int size)
{
	int left = 0;
	int right = size-1;
	for(int i =0;i < size/2;i++)
	{
	  swap(arr[i],arr[size-i]);
	  
	}
}
int main()
{
	int n;
	cout << "Enter the Number of elements : ";
	cin >> n;
	int arr[n];
	cout << "Enter Elements :";
	for ( int i =0 ; i< n ;i++)
	{
		cin >> arr[i];
		
	}
	for ( int i =0 ; i< n ;i++)
	{
		cout << arr[i];
		
	}
		
	cout << "Reversed Array :";
	rev_arr(arr,n);
	for (int i =0 ; i< n ;i++)
	{
		cout << arr[i]<< "\t";
		
	}
	cout << endl;
}