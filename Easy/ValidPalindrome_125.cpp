#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s)
{
    string newString;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (isalnum(c))
        {
            newString += c;
        }
    }

    int start = 0;
    int end = newString.length() - 1;

    while (start <= end)
    {
        if (newString[start] != newString[end])
        {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main()
{
    string s1 = " ";
    if (isPalindrome(s1))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}