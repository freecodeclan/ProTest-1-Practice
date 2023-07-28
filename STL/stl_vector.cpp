// Creating Vector
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> j;

    cout << "Memory allocated to an vector is " << j.capacity() << endl; // To check the memoery allocated to vector
    cout << endl;
    j.push_back(1); // Used to add element in vector
    cout << "Memory allocated to an vector is " << j.capacity() << endl;
    cout << endl;
    j.push_back(2);
    cout << "Memory allocated to an vector is " << j.capacity() << endl;
    cout << endl;
    j.push_back(3);
    cout << "Memory allocated to an vector is " << j.capacity() << endl;
    cout << endl;
    j.push_back(4);
    cout << "Memory allocated to an vector is " << j.capacity() << endl;
    cout << endl;
    cout << "Size of an vector is " << j.size() << endl; // Used to find the number of elements in vector
    cout << endl;
    cout << "Element at index 2 is " << j.at(2) << endl;
    cout << endl;
    cout << "Before pop_back" << endl;
    for (int i : j)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "After pop_back" << endl;
    j.pop_back();
    for (auto it : j)
    {
        cout << it << " ";
    }
    cout << endl;
    j.insert(j.begin(), 20); // Used to insert an element in vector
    for (auto it : j)
    {
        cout << it << " ";
    }
    cout << endl;
    j.insert(j.begin() + 1, 2, 5);
    for (auto i : j)
    {
        cout << i << " ";
    }
    cout << endl;
    j.erase(j.begin() + 1, j.begin() + 3); // Used to erase some element from vector
    for (auto i : j)
    {
        cout << i << " ";
    }

    return 0;
}