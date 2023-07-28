#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m;

    m.insert({1, "Harsh"});
    m.insert({3, "Sister"});
    m.insert({4, "Brother"});

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 4 is present " << m.count(4) << endl;
    cout << endl;
    cout << "Finding 5 is present " << m.find(5) << endl;

    return 0;
}