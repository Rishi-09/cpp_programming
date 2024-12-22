#include <iostream>
using namespace std;

int dec_to_bin(int dec)
{
    int rem,sum=0,pow=10;
    while (dec!=0)

    {
        rem = dec % 2;
        sum += rem*pow;
        dec /= 2;
        pow *=10;
    }
    return sum;
}
int bin_to_dec(int bin)
{
    int rem,sum=0,pow=10,base=2;
    while (bin!=0)
    {
        rem = bin % 10;
        sum += rem*base;
        bin /= 10;
        base *=2;
    }
    return sum;
}
int main()
{
    int num , choice;
    cout << " What conversion do you want \n 1. Binary to Decimal \n 2. Decimal to Binary \n Enter numeric value of your choice :" << endl ;
    cin >> choice; 
    if(choice ==1)
    {
        cout << "Enter a Binary Number :" ;
        cin >> num;
        cout << "The number from decimal to binary is  :" << bin_to_dec(num) << endl;
    }
    else 
    {
        cout << "Enter a Decimal Number :" ;
        cin >> num;
        cout << "The number from decimal to binary is  :" << dec_to_bin(num) << endl;
    }
}