/* Find the length of an string */
#include <bits/stdc++.h>
using namespace std;

// Length of an String
int findLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

// Reverse the string
void rev(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int main()
{
    char name[20];
    cout << "Enter your name: ";
    cin >> name;

    int len = findLength(name);
    cout << "Length of an string is " << len << endl;
    cout << endl;
    rev(name, len);
    cout << "Your name is ";
    cout << name;
}