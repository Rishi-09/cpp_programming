#include <iostream>
using namespace std;
string reverseWords(string s)
{
    reverse(s.begin(), s.end());
    return s;
}
int main()
{
    cout << reverseWords("abc") << endl;

    return 0;
}