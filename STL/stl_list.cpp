#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(5);
    l.push_front(3);
    l.insert(l.begin(), 1);
    l.insert(l.end(), 8);

    cout << "Before Erase" << endl;
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "After erase" << endl;
    l.erase(l.begin());

    for (auto i : l)
    {
        cout << i << " ";
    }
    return 0;
}