/* Print sum of n numbers using recursion */
#include <bits/stdc++.h>
using namespace std;

// Parameterize way to solve
void fun(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    fun(i - 1, sum + i);
}

// Functional Way to Solve
int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    fun(n, 0);
    cout << sum(n);

    return 0;
}