#include <iostream>
#include <vectors>
using namespace std;
int pair_sum(vector <int>& arr ,int target)
{
  for (int i =0 ;i < arr.size() ; i++)
    {
      if (arr[i]+arr[i+1]==target)
        return i;
    }
  return -1;
}
int main()
{
  vector <int> arr,size;
  cout << "Enter the number of elements : " ;
  cin >> size;
  for (int i = 0 ;i < size ;i++)
    {
      cout << "Enter the Element at index " << i << " : ";
      cin >> arr[i];
    }
  int target;
  cout << "Enter the target sum : ";
  cin >> target;
  res = pair_sum(arr , target);
  if (res==-1)
    cout << "Pair Sum not found : " << endl;
  else
    cout << "pair is:" << res << "," << res+1 << endl;
  return 0;
}
