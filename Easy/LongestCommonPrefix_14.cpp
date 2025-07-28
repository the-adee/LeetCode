#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty())
    {
        return "";
    }
    
    int len = strs.size();
    string prefix = "";

    string prefixElement = strs[0];

    for (int i = 0; i < prefixElement.size(); i++)
    {
        char prefixLetter = prefixElement[i];
        for (int j = 0; j < len; j++)
        {
            if (i >= strs[j].size() || strs[j][i] != prefixLetter)
            {
                return prefix;
            }
        }
        prefix += prefixLetter;
    }

    return prefix;
}

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    string prefix = longestCommonPrefix(strs);
    cout << prefix << endl;
    return 0;
}