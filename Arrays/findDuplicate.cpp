/* Find the duplicate in place from sorted array */
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> a, int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (a[i] != a[j])
        {
            a[i + 1] = a[j];
            i++;
        }
    }
    return i + 1;
}

int main()
{
    int size;
    cout << "Enter the size of an vector: ";
    cin >> size;

    vector<int> a(size);
    cout << "Enter the elements of an sorted array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int DuplicateValue = findDuplicate(a, size);
    cout << "The dupicate values are " << DuplicateValue << endl;
    return 0;
}