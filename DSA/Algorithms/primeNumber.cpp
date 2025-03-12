#include <iostream>
using namespace std;
bool isPrime(int n )
{
	
	for (int i=0;i*i<=n;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
	int n;
	cout << "Enter the Number to check :" ;
	cin >> n;
	if (isPrime(n))
	cout<< "Number is Prime." << endl;
	else
	cout << "Number is not Prime." << endl;
	return 0;
}
