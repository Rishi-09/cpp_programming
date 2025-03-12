#include <iostream>
using namespace std;
int main()
{
    char arr[] = {'a','4'};
    for (char c:arr)
    {   
        cout<< c << " " << c+1 << endl;
        
    }
    return 0;
}