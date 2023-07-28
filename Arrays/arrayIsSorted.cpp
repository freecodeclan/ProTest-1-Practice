/* Tell whether array is sorted or not */
#include <bits/stdc++.h>
using namespace std;

int issorted(vector<int> a, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int size;
    cout << "Enter the size of an vector: ";
    cin >> size;

    vector<int> v(size);
    cout << "Enter the elements of an array : " << endl;
    for (int i = 1; i < v.size(); i++)
    {
        cin >> v[i];
    }

    int sortedArray = issorted(v, size);

    cout << sortedArray << endl;
    return 0;
}