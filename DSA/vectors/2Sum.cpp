#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map <int , int> m;
        for (int i = 0; i< nums.size();i++)
        {
            int first = nums[i];
            int sec = target-first;
            if( m.find(sec)!=m.end() )
            {
                result.push_back(i);
                result.push_back(m[sec]);
            }
            m[first]= i;
        }
        return result;
    }
