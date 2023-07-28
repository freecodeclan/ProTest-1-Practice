#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int revNum = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        revNum = (revNum * 10) + last_digit; // We'll use this formula to reverse the number
        n = n / 10;
    }
    cout << revNum << " ";
}