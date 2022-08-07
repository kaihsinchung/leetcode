// solution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int>m;
        vector<int>ans;
        for (int i = 0; i < nums.size(); i++)
            m[nums[i]] = i;
        for (int i = 0; i < nums.size(); i++)
        {
            if (m.count(target - nums[i]))
            {
                if (m[target - nums[i]] != i)
                {
                    ans.push_back(i);
                    ans.push_back(m[target - nums[i]]);
                    break;
                }
            }
        }
        return ans;
    }
};
int main( )
{
    vector<int>src{ 3, 2, 4  };
    Solution s;
    vector<int>ans;
    ans = s.twoSum(src, 6);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
    return 0;
}

 

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
