/* Print from n to 1 using recursion */
#include <bits/stdc++.h>
using namespace std;

void fun(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << " ";
    fun(i - 1, n);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    fun(n, n);
    return 0;
}