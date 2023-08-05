/* Print the factorial of n numbers using recursion */
#include <bits/stdc++.h>
using namespace std;

// Functional Way to solve
int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

// Parameterize way to sole

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << fact(n);

    return 0;
}