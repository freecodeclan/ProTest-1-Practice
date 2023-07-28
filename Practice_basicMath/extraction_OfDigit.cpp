/*  Number of Digits... Return the number of digits   */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int count = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        count = count + 1;
        n = n / 10;
    }
    cout << count << endl;
}