#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string s)
{
    // map to store the roman-no [key] => integer [value]
    unordered_map<char, int> roman = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    int result = 0;

    for (size_t i = 0; i < s.length(); i++)
    {
        if (i + 1 < s.length() && roman[s[i]] < roman[s[i + 1]])
        {
            // usual convention to write roman number
            // largest to smallest

            // to eliminate the un-convention
            // e.g. IX -> 9 and IV -> 4
            // store the diff. b/n the larger - smaller
            result += (roman[s[i + 1]] - roman[s[i]]);
            i++;
        }
        else
        {
            result += roman[s[i]];
        }
    }

    return result;
}

int main()
{
    string input = "MCMXCIV";
    int result = romanToInt(input);
    cout << "Roman to Int: " << result << endl;
    return 0;
}
