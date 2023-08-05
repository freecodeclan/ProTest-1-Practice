/* Reverse an array using recursion */
#include <bits/stdc++.h>
using namespace std;

// This is the first method reversing an array using multiple variables
void f(int s, int e, int a[])
{
    if (s >= e)
    {
        return;
    }
    swap(a[s], a[e]);
    f(s + 1, e - 1, a);
}

// Second method using only one pointer
void fun(int i, int a[], int n)
{
    if (i >= n / 2)
        return;
    swap(a[i], a[n - i - 1]);
    fun(i + 1, a, n);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // f(0, n - 1, arr);
    fun(0, arr, n);

    cout << "The reverse array looks like : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}