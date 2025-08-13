#include <iostream>
#include <vector>

using namespace std;

int countHillValley(vector<int> &nums)
{
    int len = nums.size() - 2;
    int hill = 0;
    int valley = 0;

    for (int i = 1; i <= len; i++)
    {

        while (i <= len && i > 0)
        {
            if (nums[i - 1] != nums[i])
            {
                if (nums[i - 1] < nums[i] && nums[i] > nums[i + 1])
                {
                    hill++;
                }
                else if (nums[i - 1] > nums[i] && nums[i] <= nums[i + 1])
                {
                    valley++;
                }
                i++;
            }
            else
            {
                i--;
                if (nums[i - 1] < nums[i] && nums[i] > nums[i + 1])
                {
                    hill++;
                }
                else if (nums[i - 1] > nums[i] && nums[i] <= nums[i + 1])
                {
                    valley++;
                }
            }
        }
    }

    return hill + valley;
}

int countHillValley2(vector<int> &arr)
{
    int len = arr.size();

    int i = 0;
    int j = 1;
    int count = 0;

    // instead of removing duplicates
    // using
    // pointer approach
    while (j + 1 < len)
    {
        if (arr[i] < arr[j] && arr[j] > arr[j + 1] || arr[i] > arr[j] && arr[j] < arr[j + 1])
        {
            count++;
            i = j;
        }

        j++;
    }
    return count;
}

int main()
{
    vector<int> arr = {2,4,1,1,6,5};

    int result = countHillValley2(arr);

    cout << "Result is: " << result << endl;
    return 0;
}