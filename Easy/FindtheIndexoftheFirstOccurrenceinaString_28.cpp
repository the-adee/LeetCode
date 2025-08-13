#include <iostream>
#include <string>
#include <climits>

using namespace std;

int strStr(string haystack, string needle)
{

    int idx = INT_MIN;
    for (int i = 0; i < haystack.length();)
    {
        int count = 0;
        int tempi = i;
        if (haystack[i] == needle[0])
        {
            idx = i;
            int j = 0;
            while (j < needle.length())
            {
                if (needle[j] == haystack[i])
                {
                    count++;
                }
                else
                {
                    break;
                }
                // cout << "I: " << i << endl;
                // cout << "j: " << j << endl;
                // cout << "count: " << count << endl;
                i++;
                j++;
            }
            if (count == needle.length())
            {
                // cout << "Cam here" << endl;
                return idx;
            }
        }
        i = tempi;
        i++;
    }

    return -1;
}

int main()
{
    int result = strStr("wowohhellowowworld", "woh");
    cout << result << endl;
    return 0;
}