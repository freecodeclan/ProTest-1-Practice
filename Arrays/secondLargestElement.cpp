/* Find the second largest and second smallest number from an given array */
#include <bits/stdc++.h>
using namespace std;

// Function to find second largest element
int secondLargest(vector<int> arr, int n)
{
    int largest = arr[0];
    int slargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else
        {
            if (arr[i] < largest && arr[i] > slargest)
            {
                slargest = arr[i];
            }
        }
    }
    return slargest;
}

int secondsmallest(vector<int> arr, int n)
{
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < ssmallest)
        {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

int main()
{
    int size;
    cout << "Enter the size of an array ";
    cin >> size;

    vector<int> v(size);
    cout << "Enter the elements of an array: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    int slargest = secondLargest(v, size);
    int ssmallest = secondsmallest(v, size);

    cout << "The second largest element is " << slargest << endl;
    cout << "The second smallest element is " << ssmallest << endl;
    return 0;
}