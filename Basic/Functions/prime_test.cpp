#include <iostream>
using namespace std;

bool prime(int n){
    if(n%2==0)
        return false;
    else
        for(int i=0;i<(n+1)/2;i++)
        {
            if(n&i==0)
                return false;
            else
                return true;
        }
    return 0;
}

int main(){
    int n;
    cout << "Enter the Number to Check :";
    cin >> n;
    if(prime(n)!=0)
        cout << "Number is Prime." << endl;
    else
        cout << "Number is Composite." << endl;
}