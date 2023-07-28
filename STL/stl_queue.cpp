#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Mom");
    q.push("Dad");
    q.push("sister");
    q.push("Brother");

    cout << "first element is " << q.front();

    return 0;
}