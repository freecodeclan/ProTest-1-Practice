#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int revNum = 0;
    int duplicate = n;
    while (n > 0)
    {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }
    if (revNum == duplicate)
        cout << true << endl;
    else
        cout << false << endl;
}