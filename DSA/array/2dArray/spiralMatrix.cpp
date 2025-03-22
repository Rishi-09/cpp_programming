#include <iostream>
using namespace std;
#include <vector>
vector<int> spiralOrder(vector<vector<int>>& mat) {
    vector <int>  arr;
    int stCol = 0 , eCol = mat[0].size()-1 ,stRow = 0,eRow = mat.size()-1;
    while(stRow <= eRow && stCol <= eCol)
    {
        for( int i = stCol ; i <= eCol ; i++)
        {
            arr.push_back(mat[stRow][i]);
        }

        for( int j = stRow+1 ; j <= eRow ; j++)
        {
            arr.push_back(mat[j][eCol]);
        }

        for( int k = eCol-1 ; k >= stCol ; k--)
        {   
            if(stRow==eRow) break;
            arr.push_back(mat[eRow][k]);
        }

        for( int m = eRow-1 ; m >= stRow+1 ; m--)
        {   
            if(stCol==eCol) break;  
            arr.push_back(mat[m][stCol]);
        }
        stRow++;eRow--;stCol++;eCol--;
    }
    return arr;
}
int main()
{
    vector <vector<int>> mat = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for (int i:spiralOrder(mat))
    {
        cout << i << " " ;
    }
    cout << endl;
    return 0;
}