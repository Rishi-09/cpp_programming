#include <iostream>
#include <vector>
using namespace std;
int compress(vector<char> &chars)
{
    int size = chars.size();
    int idx = 0;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        char ch = chars[i];
        while (i < size && chars[i] == ch)
        {
            count++;
            i++;
        }
        if (count == 1)
            chars[idx++] = ch;
        else
        {
            chars[idx++] = ch;
            string str = to_string(count);
            for (char dig : str)
            {
                chars[idx++] = dig;
            }
        }
        i--;
    }
    chars.resize(idx);
    return chars.size();
}

int main()
{
    vector <char> vec ;
    string s;
    cout << "Enter the input as a string :" ;
    cin >> s;
    for (int i=0;i<s.length();i++)
    {
        vec.push_back(s[i]);
    }
    cout << "Output :" << compress(vec) << endl;
    return 0;
}