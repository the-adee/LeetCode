#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &a)
{
    int len = a.size();

    // using two pointer
    int ptr1 = 0;
    int ptr2 = ptr1 + 1;

    while (ptr2 < len)
    {
        // to check for adjacent element are equal or not
        if (a[ptr1] == a[ptr2])
        {
            a.erase(a.begin() + ptr2);

            // updating the length of array
            // acc. to curr elements
            len = a.size();
        }

        // if only not equal then proceed further in array.
        if (a[ptr1] != a[ptr2])
        {
            ptr1++;
            ptr2++;
        }
    }

    return len;
}

int main()
{
    vector<int> vec = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int k = removeDuplicates(vec);

    cout << "k values: " << k << endl;

    for (int value : vec)
    {
        cout << value << " ";
    }

    cout << endl;

    return 0;
}