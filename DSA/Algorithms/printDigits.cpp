#include <iostream>
using namespace std;
void printDigits(int num)
{   
    int newNum=0;
    while(num)
    {
        newNum = newNum*10+num%10;
        num/=10;
    }
    while(newNum)
    {
        cout << newNum%10 << endl;
        newNum/=10;
    }
}
int main()
{
    cout << "Enter the number :";
    int num;
    cin >> num;
    printDigits(num);
    return 0;
}