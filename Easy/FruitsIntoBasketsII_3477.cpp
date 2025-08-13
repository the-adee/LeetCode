#include <iostream>
#include <vector>
#include <map>

using namespace std;

int numOfUnplacedFruits(vector<int> &fruits, vector<int> &baskets)
{
    for (int i = 0; i < fruits.size(); i++)
    {
        for (int j = 0; j < baskets.size(); j++)
        {
            if (baskets[j] >= fruits[i])
            {
                baskets.erase(baskets.begin() + j);
                break;
            }
        }
    }
    return baskets.size();
}

int main()
{
    vector<int> fruits = {1, 2, 3, 45, 6};
    vector<int> basket = {45, 7, 1, 2, 0};
    int result = numOfUnplacedFruits(fruits, basket);
    cout << result << endl;
    return 0;
}