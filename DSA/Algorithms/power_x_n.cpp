#include <iostream>
using namespace std;
double myPow(double x, int n)
{
        if(x==1) return 1.0;
        if(n==1) return x;
        if(x==0) return 0.0;
        if(n==0) return 1.0;
        if(x==-1 && n%2==0) return 1.0;
        if(x==-1 && n%2!=0) return -1.0;
        long bin = n;
        double ans = 1;
        if(n<0)
        {
            x = 1/x;
            bin = -bin ;
        }
        while(bin!=0)
        {
            if(bin%2==1)
                ans *= x;
            x*=x;
            bin/=2;
        }
        return ans;
}
int main()
{
        int x ,n;
    cout << "Enter the Value of x:";
    cin >> x;
    cout << "Enter the value of n:";
    cin >> n;
    cout << myPow(x,n) << endl;
    return 0;
}
