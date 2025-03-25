#include <iostream>
#include <vectors>
using namespace std;
void rotateArray(vector<int> arr,int k)
{
	int n = arr.size();
	k = k % n; // Handle k > n cases
	reverse(arr.begin(),arr.begin()+k);
	reverse(arr.begin()+k,arr.end());
	reverse(arr.begin(),arr.end());
	
}
