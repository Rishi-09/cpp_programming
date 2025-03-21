#include <iostream>
using namespace std;
#include <vector>
bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m = mat.size(),n=mat[0].size();
    int r = 0,c=n-1;
    while (c>=0 && r<=m-1)
    {
        if (mat[r][c]==target) return true;
        else if (target < mat[r][c]) c--;
        else r++;
    }
    return false;
    }