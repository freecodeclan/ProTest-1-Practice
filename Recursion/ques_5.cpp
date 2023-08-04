/* Print from n to 1 using backtracking(without using "i-1" condition)*/
#include <bits/stdc++.h>
using namespace std;

void fun(int i, int n)
{
    if (i > n)
    {
        return;
    }
    fun(i + 1, n);
    cout << i << " ";
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    fun(1, n);
    return 0;
}