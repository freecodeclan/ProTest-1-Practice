// Creating STL Array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 5> v = {1, 2, 3, 4, 5}; // Declaring & initilisation of an STL array

    int size = v.size(); // To find size of an array

    // Traversing an array using for loop
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
        cout << endl;
    }
    cout << endl;
    cout << "Element at index 2 is " << v.at(2) << endl; // To find the value at particular index
    cout << endl;
    cout << "Array is empty or not " << v.empty() << endl; // To check whether array is empty or not
    cout << endl;
    cout << "The first element of an array is " << v.front() << endl; // To check the first element of an array
    cout << endl;
    cout << "The last element of an array is " << v.back(); // To check the last element of an array
    return 0;
}