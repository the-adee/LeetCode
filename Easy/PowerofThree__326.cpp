#include <bits/stdc++.h>

using namespace std;

bool isPowerOfThree(int n)
{
    if (n <= 0)
    {
        return false;
    }

    if (n % 3 == 0)
    {
        return isPowerOfThree(n / 3);
    }

    return n == 1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (isPowerOfThree(n))
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
    return 0;
}