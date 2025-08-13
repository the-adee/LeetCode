#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// solution that has TC: O(n) & SC: O(n)
int majorityElement(vector<int> &nums)
{
    unordered_map<int, int> um;
    int len = nums.size();

    for (int i = 0; i < len; i++)
    {
        if (!um.count(nums[i]))
        {
            um.insert({nums[i], 1});
        }
        else
        {
            um[nums[i]] += 1;
        }
    }

    int maxEle = 0;

    for (auto &pair : um)
    {
        if (pair.first > maxEle)
        {
            maxEle = pair.first;
        }
    }

    return maxEle;
}

// solution that has TC: O(n) & SC: O(1)
int majorityElementOptimized(vector<int> &nums)
{
    int len = nums.size();
    sort(nums.begin(), nums.end());

    int pos = len / 2;

    return nums[pos];
}

int main()
{
    vector<int> vec = {1, 1, 2, 2, 2, 3, 3};
    int result = majorityElement(vec);

    int answer = majorityElementOptimized(vec);

    cout << answer << endl;
    return 0;
}