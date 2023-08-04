/* Print from 1 to n but without using "i+1" this time. */
#include <bits/stdc++.h>
using namespace std;

void fun(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    fun(i - 1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    fun(n, n);

    return 0;
}