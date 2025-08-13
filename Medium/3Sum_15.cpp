#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    int len = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    for (int i = 0; i < len; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int ptr1 = i + 1;
        int ptr2 = len - 1;

        while (ptr1 < ptr2)
        {
            int target = nums[i] + nums[ptr1] + nums[ptr2];
            if (target < 0)
            {
                ptr1++;
            }
            else if (target > 0)
            {
                ptr2--;
            }
            else
            {
                ans.push_back({nums[i], nums[ptr1], nums[ptr2]});
                ptr1++;
                ptr2--;

                while (ptr1 < ptr2 && nums[ptr1] == nums[ptr1 - 1]) ptr1++;
                while (ptr1 < ptr2 && nums[ptr2] == nums[ptr2 + 1]) ptr2--;
            }
        }
    }
    return ans;
}


int main()
{
    vector<int> vec = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(vec);

    cout << "[";
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
    }

    cout << "]" << endl;
    return 0;
}
