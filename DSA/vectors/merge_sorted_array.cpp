#include <iostream>
#include <vector>
using namespace std;
void MergeSortedArray(vector<int> &A, int m, vector<int> &B, int n)
{
    int idx = m + n - 1;
    int i = m - 1, j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (A[i] <= B[j])
        {
            A[idx] = B[j];
            j--;
            idx--;
        }
        else
        {
            A[idx] = A[i];
            i--;
            idx--;
        }
    }
}
int main()
{
    vector<int> a, b;
    int n, m;
    cout << "enter the number of elements in the first array :";
    cin >> n;
    int valid = 0;
    for (int i = 0; i < n; i++)
        {   int val;
            cout << "enter element at index " << i << " :";
            cin >> val;
            a.push_back(val);
        }
    cout << "enter the number of elements in the second array :";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cout << "enter element at index " << i << " :";
        int val;
        cin >> val;
        b.push_back(val);  
    }
    MergeSortedArray(a, 3, b, m);
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
}