#include <iostream>
#include <vector>

using namespace std;

int countPrimes(int n)
{
    // creating boolean vector-container
    vector<bool> isPrime(n, true);

    isPrime[0] = false;
    isPrime[1] = false;

    int count = 0;

    // using sieve eratosthenes <- (I hope I spelled it right!) approach
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (isPrime[i])
            count++;
    }

    return count;
}

int main()
{

    int n = 50;
    int result = countPrimes(n);

    cout << result << endl;
    return 0;
}