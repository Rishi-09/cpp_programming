#include <iostream>
using namespace std;
void rev_arr(int arr[],int size)
{
	int left = 0;
	int right = size-1;
	while(left<=right)
	{
	  swap(arr[left],arr[right]);
	  left++;
	  right--;
	  
	}
}
int main()
{
	int n;
	cout << "Enter the Number of elements : ";
	cin >> n;
	int arr[n];
	for ( int i =0 ; i< n ;i++)
	{	cout << "Enter Element at index " << i << " : " ;
		cin >> arr[i];
		
	}
	cout << " Entered Array : ";
	for ( int i =0 ; i< n ;i++)
	{
		cout << arr[i] <<  " ";
		
	}	
	cout << endl;
	cout << "Reversed Array : ";
	rev_arr(arr,n);
	for (int i =0 ; i< n ;i++)
	{
		cout << arr[i]<< " ";
		
	}
	cout << endl;
}