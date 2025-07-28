#include <iostream>
#include <climits>
using namespace std;

int reverse(int x)
{
    int reversedNumber = 0;

    while (x != 0)
    {
        int digit = x % 10;

        // constraints condition
        // before overflow reaches
        // return 0
        if (reversedNumber > INT_MAX / 10 || reversedNumber < INT_MIN / 10)
            return 0;

        reversedNumber = (reversedNumber * 10) + digit;
        x /= 10;
    }

    return reversedNumber;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int num;
        cin >> num;
        int result = reverse(num);
        cout << result << endl;
    }
    return 0;
}
