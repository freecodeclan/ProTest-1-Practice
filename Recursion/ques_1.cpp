/* Print name n times using recursion */
#include <bits/stdc++.h>
using namespace std;

void fun(int i, int n)
{
    if (i > n) // Base Condition
    {
        return;
    }
    cout << "Harsh" << endl;
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