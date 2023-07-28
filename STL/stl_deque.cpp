// Creating deque
#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d;

    cout << d.max_size() << endl; // To find the size of an deque
    cout << endl;
    d.push_back(1);
    d.push_front(5);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    d.pop_back();
    for (int i : d)
    {
        cout << i << " ";
    }
    return 0;
}