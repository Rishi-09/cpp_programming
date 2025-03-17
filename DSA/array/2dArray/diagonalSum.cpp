#include <iostream>
using namespace std;
int getDiaSum(int mat[][3],int row,int col)
{   
    int diaSum =0;
    for(int i=0;i<row;i++)
    {
        for(int j =0;j<col;j++)
        {
            if(i==j)
            {
                diaSum+=mat[i][j];
            }
        }
    }
    return diaSum;
}
int main()
{
    int mat[3][3] = { 
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    cout << "Sum of diagonal elements is :" << getDiaSum(mat,3,3) << endl;
    return 0;
}