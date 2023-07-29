// Find the largest element in an array 
#include <bits/stdc++.h>
using namespace std;

// Function to find largest element from an array
int largsetElement(vector<int> arr, int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int size;
    cout << "Enter the size of an vector: ";
    cin >> size;

    // Taking an input from user in vector
    vector<int> v(size);
    cout << "Enter the elements of an array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    // Calling an function
    int maxElement = largsetElement(v, size);
    cout << "The largest Element from an array is " << maxElement << endl;
    return 0;
}