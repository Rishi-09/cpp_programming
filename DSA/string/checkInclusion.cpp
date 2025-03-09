#include <iostream>
using namespace std;

bool isFreqSame(int arr1[], int arr2[])
{
    for (int i = 0; i < 26; i++)
    {
        if ((arr1[i] - arr2[i]) != 0)
         return false;
    }
    return true;
}

bool checkInclusion(string s1, string s2)
{
    int freq[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        freq[s1[i] - 'a']++;
    }

    int windSize = s1.length();

    for (int i = 0; i < s2.length(); i++)
    {
        int windIdx = 0, idx = i;
        int windFreq[26] = {0};

        while (idx < s2.length() && windIdx < windSize)
        {
            windFreq[s2[idx] - 'a']++;
            windIdx++;
            idx++;
        }
        if (isFreqSame(freq, windFreq))
            return true;
    }

    return false;
}