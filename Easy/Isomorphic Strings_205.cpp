#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

bool isIsomorphic(string s, string t)
{
    if (s.size() != t.size())
        return false;

    unordered_map<char, char> myMap1;
    unordered_map<char, char> myMap2;

    for (int i = 0; i < s.size(); ++i)
    {
        char c1 = s[i], c2 = t[i];
        if (myMap1.count(c1) && myMap1[c1] != c2)
            return false;
        if (myMap2.count(c2) && myMap2[c2] != c1)
            return false;

        myMap1[c1] = c2;
        myMap2[c2] = c1;
    }

    return true;
}

int main()
{
    bool flag = isIsomorphic("paper", "title");
    if (flag)
    {
        cout << "true" << "\n";
    }
    else
    {
        cout << "false" << "\n";
    }
    return 0;
}
