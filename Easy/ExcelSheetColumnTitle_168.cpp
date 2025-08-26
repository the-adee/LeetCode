#include <bits/stdc++.h>

using namespace std;

string convertToTitle(int columnNumber)
{
    string title = "";

    while (columnNumber > 0)
    {
        int offSet = (columnNumber - 1) % 26;
        title += 'A' + offSet;
        columnNumber = (columnNumber - 1) / 26;
    }

    return reverse(title.begin(), title.end());
}

int main()
{
    return 0;
}