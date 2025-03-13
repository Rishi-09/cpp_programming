#include <iostream>
#include <math.h>
using namespace std;
bool isArmstrong(int num)
{
    int temp = num , check = num ,arm=0,count=0;
    while(temp)
    {
        temp/=10;
        count++;
    }
    while(num)
    {
        arm = arm + pow(num%10,count);
        num/=10;
    }
    if (check == arm)
        return true;
    return false;
}
int main()
{
    cout << "Enter the Number :";
    int num;
    cin >> num;
    if (isArmstrong(num))
        cout << num << " is Armstrong number." << endl;
    else 
        cout << num << " isn't Armstrong Number." << endl;
    return 0; 
}