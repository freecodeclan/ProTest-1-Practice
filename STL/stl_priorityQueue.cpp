#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Maximum priority Queue
    priority_queue<int> maxi;
    maxi.push(2);
    maxi.push(4);
    maxi.push(1);
    maxi.push(3);

    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;
    cout << endl;
    // minimum priority Queue
    priority_queue<int, vector<int>, greater<int>> mini;

    mini.push(2);
    mini.push(8);
    mini.push(7);

    int min = mini.size();
    for (int i = 0; i < min; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }

    cout << mini.size() << endl;

    return 0;
}