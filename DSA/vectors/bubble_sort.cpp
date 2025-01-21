#include <iostream>
#include <vector>
using namespace std;
void Bubble_Sort(vector<int> &arr)
{
   
    int n = arr.size();
    bool swapped;

    // Outer loop for each pass
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;

        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - i - 1; j++)
        {
            // Swap if the current element is greater than the next element
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true; // Mark as swapped
            }
        }

        // If no elements were swapped in this pass, the array is sorted
        if (!swapped)
        {
            break;
        }
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
    Bubble_Sort(arr);
    cout << "after sorting :";
    for (int i:arr)
    {
        cout << i << " ";
    }
    cout << endl;
}