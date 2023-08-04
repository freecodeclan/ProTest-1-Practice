/* Print linearly from 1 to n using recursion */
#include <bits/stdc++.h>
using namespace std;

void fun(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << " ";
    fun(i + 1, n);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    fun(1, n);
    return 0;
}