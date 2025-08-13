#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    vector<int> result;
    // to check if vector size is 1 and
    // the element is less than 9
    // then return {single_element + 1}
    if (digits.size() == 1 && digits[0] < 9)
    {
        return {digits[0] + 1};
    }

    // to check if vector size is 1 and
    // the element is equal to 9
    // then return {1, 0}
    if (digits.size() == 1 && digits[0] == 9)
    {
        return {1, 0};
    }

    int len = digits.size();

    int sum = 0;
    int idx = 0;

    for (int val : digits)
    {
        sum += val;
    }

    for (int i = len - 1; i >= 0; i--)
    {
        if (digits[i] == 9)
        {
            result.push_back(0);
        }
        else
        {
            result.push_back(digits[i] + 1);
            idx = i;
            break;
        }
    }

    if (sum % 9 == 0)
    {
        cout << "Divisible by 9" << endl;
        result.push_back(1);
    }
    else
    {
        cout << "NOt divisible by 9" << endl;
        for (int i = idx - 1; i >= 0; i--)
        {
            cout << "came here to push remaining elements" << endl;
            result.push_back(digits[i]);
        }
    }

    reverse(result.begin(), result.end());

    return result;
}

vector<int> plusOne1(vector<int> &digits)
{
    vector<int> result;
    int len = digits.size();
    for(int i=len-1; i >=0; i--){
        if(digits[i] < 9){
            digits[i]++;
            return digits;
        }

        digits[i] = 0;
    }

    result[0] = 1;

    return result;
}

int main()
{
    // int t;
    // cin >> t;

    // while (t--)
    // {
    //     vector<int> vec;
    //     int n;
    //     cout << "Input size: ";
    //     cin >> n;

    //     for (int i = 0; i < n; i++)
    //     {
    //         int e;
    //         cin >> e;
    //         vec[i] = e;
    //     }

    //     vector<int> result = plusOne(vec);

    //     for (int val : result)
    //     {
    //         cout << val << " ";
    //     }

    //     cout << endl;
    // }

    vector<int> num = {1, 9, 9, 9};
    vector<int> result = plusOne1(num);

    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}