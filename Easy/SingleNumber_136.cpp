#include <iostream>
#include <vector>
#include <set>

using namespace std;

int singleNumber(vector<int> &nums)
{
    set<int> sets;
    int len = nums.size();

    for (int i = 0; i < len; i++)
    {
        if (!sets.count(nums[i]))
        {
            sets.insert(nums[i]);
        }else{
            
        }
    }
    return 0;
}

int main()
{
    return 0;
}