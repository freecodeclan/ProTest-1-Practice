#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int sum = 0;
    int temp = n;
    while (temp > 0)
    {
        int rem = temp % 10;
        sum += rem * rem * rem;
        temp = temp / 10;
    }
    if (sum == n)
    {
        cout << "It's an armstrong number" << endl;
    }
    else
    {
        cout << "Not an armstrong number" << endl;
    }
    return 0;
}