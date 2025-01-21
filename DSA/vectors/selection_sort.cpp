#include <iostream>
#include <vector>
using namespace std;
void SelectionSort(vector <int> &arr)
{   
    int size = arr.size();
    
    for(int i =0;i<size-1;i++)
    {   int min=i;
        for(int j =i+1;j<size;j++)
        {   
            if(arr[min]>=arr[j]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
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
    SelectionSort(arr);
    cout << "after sorting :";
    for (int i:arr)
    {
        cout << i << " ";
    }
    cout << endl;
}