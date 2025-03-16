#include <iostream>
using namespace std;
int getMaxSum(int mat[][3],int row,int col)
{
    int maxSum=0;
    for(int i=0;i<row;i++)
    {   int rowSum=0;
        for (int j = 0;j<col;j++){
            rowSum+=mat[i][j];
        }   
        maxSum=max(rowSum,maxSum);
    }
    return maxSum;  
}
int main()
{ 
    
    int mat[][3]={ {1,2,3},{4,5,6},{7,8,9}};
    cout << "Max row sum in the array is :" << getMaxSum(mat,3,3) << endl;
    return 0;
}