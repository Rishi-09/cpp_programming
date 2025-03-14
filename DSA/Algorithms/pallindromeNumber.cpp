#include <iostream>
#include <climits>
using namespace std;
bool isPallindrome(int x)
{
    if (x<0) return false;
    int temp = x,num=0;
    while(temp)
    {   if(num>INT_MAX/10 || num<INT_MIN/10){
            return false;
        }
        num = num*10 + temp%10;
        temp/=10;
    }
    if (num==x)
    {
        return true;
    }
    return false;   
}
int main()
{
    int x;
    cout << "Enter a Number :";
    cin >> x;
    if (isPallindrome(x))
    {
        cout << x << " is Pallindrome." << endl;
    }
    else {
        cout << x << " is not Pallindrome." << endl;
    }
    return 0;

}