#include <iostream>
using namespace std;
#include <vector>
int IfPossible(vector<int> &arr, int cows, int size, int alloweddistance)
{
    int cow = 1, lastpos = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] - lastpos >= alloweddistance)
        {
            cow++;
            lastpos = arr[i];
        }
        if (cow == cows)
            return true;
    }
    return false;
}

void bubbleSort(vector<int> &arr)
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

int MinDistance(vector<int> &arr, int cows)
{
    bubbleSort(arr);
    int n = arr.size();
    int left = arr[0], right = arr[n - 1], mid, ans = -1;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (IfPossible(arr, cows, n, mid))
        {
            ans = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    return ans;
}
int main()
{
    int cows;
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
    cout << "Enter number of cows :";
    cin >> cows;
    cout << "Result :" << MinDistance(arr, cows) << endl;
}
