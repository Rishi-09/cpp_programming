#include <iostream>
using namespace std;
int fact(int n);
//Function
int BinCoeff(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int fact(int n)
{
    if (n==0)
        return 1;
    else 
        return n*fact(n-1);
}
int main()
{
    int n,r;
    cout << "Enter N :";
    cin >> n;
    cout << "Enter R :";
    cin >> r;
    cout << "Binomial Coefficient is :" << BinCoeff(n,r) << endl;
}