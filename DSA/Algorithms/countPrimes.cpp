#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {
    vector <bool> isPrime(n+1,true);
    int count=0;
    for (int i = 2;i<n;i++)
    {
        if (isPrime[i]){
            count++;
        }
        for(int j= i*2;j<n;j=i+j)
        {
            isPrime[j]=false;
        }
    }
    return count;
}
int main()
{
    cout << "Enter the Number :";
    int n;
    cin >> n;
    cout << "Number of Prime Numbers from 2 to " << n << "are :" << countPrimes(n) << endl;
    return 0;
}