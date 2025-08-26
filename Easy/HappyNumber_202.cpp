#include <bits/stdc++.h>

using namespace std;

int calculation(int n)
{
    int result = 0;
    while (n != 0)
    {
        int digit = n % 10;
        result += digit * digit;
        n /= 10;
    }
    return result;
}

bool isHappy(int n, unordered_set<int> &seen)
{
    if (n == 1)
        return true;
    if (seen.count(n))
        // cycle detected
        return false;
    seen.insert(n);
    int result = calculation(n);
    return isHappy(result, seen);
}

int main()
{
    int n1 = 19;
    unordered_set<int> seen;
    if (isHappy(n1, seen))
    {
        std::cout << "true\n";
    }
    else
    {
        std::cout << "false\n";
    }
}
