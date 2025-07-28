#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> &a, int val)
{
    int len = a.size();

    // using two pointer
    int ptr1 = 0;

    while (ptr1 < len)
    {
        // to check for a[i] == target->value
        if (a[ptr1] == val)
        {
            a.erase(a.begin() + ptr1);

            // updating the length of array
            // acc. to curr elements
            len = a.size();
            ptr1--;
        }

        ptr1++;
    }

    return len;
}

int main()
{
    vector<int> vec = {0,1,2,2,3,0,4,2};

    int k = removeElement(vec, 2);

    cout << "k values: " << k << endl;

    for (int value : vec)
    {
        cout << value << " ";
    }

    cout << endl;
    return 0;
}