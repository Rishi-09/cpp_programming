#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    if (matrix.empty() || matrix[0].empty())
        return false;

    int m = matrix.size(), n = matrix[0].size();
    int left = 0, right = m * n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int midValue = matrix[mid / n][mid % n]; // Convert 1D index to 2D indices

        if (midValue == target)
            return true;
        else if (midValue < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return false;
}
int main()
{
    vector<vector<int>> mat = { 
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int key;
    cout << "enter element to search :";
    cin >> key;
    if (searchMatrix(mat, key))
    {
        cout << key << " found. " << endl;
    }
    else
    {
        cout << key << " not found" << endl;
    }
    return 0;
}