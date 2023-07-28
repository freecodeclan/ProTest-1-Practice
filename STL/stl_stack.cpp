#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Harsh");
    s.push("juhi");
    s.push("Vandana");
    s.push("Mom");

    cout << "Top Element is " << s.top();
    cout << endl;
    s.pop();
    cout << "After Mom top element is " << s.top();

    return 0;
}