#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    
    return low;
}

int main()
{
    //                 0  1  2  3  4   5   6   7   8
    vector<int> vec = {1, 2, 4, 6, 9, 10, 15, 28, 78};
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cout << "Input: ";
        cin >> n;
        cout << searchInsert(vec, n) << endl;
    }
    return 0;
}