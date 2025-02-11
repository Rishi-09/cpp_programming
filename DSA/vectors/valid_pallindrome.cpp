#include <iostream>
using namespace std;
#include <vector>

bool isAlphaNum(char ch)
{
    if ((ch >= 0 && ch <= 9) || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }
    return false;
}
bool isPalindrome(string s)
{
    int end = s.length() - 1;
    
    int start = 0;
    
    while (start < end)
    {
        if (!isAlphaNum(s[start]))
        {
            start++;
            continue;
        }
        
        if (!isAlphaNum(s[end]))
        {
            end--;
            continue;
        }
        
        if (tolower(s[start]) != tolower(s[end]))
            return false;
        cout << start << endl;
        cout << end << endl;
        start++;
        end--;
    }
    return true;
}
int main()
{
    string a = "OP";
    if (isPalindrome(a))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}