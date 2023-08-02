#include <bits/stdc++.h>
using namespace std;

int main()
{
    // char temp = 'H';
    // int temp = 'H';
    // char name[] = {'H', 'A', 'R', 'S', 'H'};
    // char n[] = {'J', 'U', 'H', 'I', '\0'}; // Defining and Initilising String
    char s[] = "Vandana"; // Defining and Initilising String
    int length = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        length++;
    }
    cout << "Length of an string is " << length;
    cout << endl;

    /* Converting UPPERCASE to lowercase */
    char V[] = "SISTER";
    for (int i = 0; V[i] != '\0'; i++)
    {
        V[i] += 32;
    }
    cout << "The lowercase looks like " << V << endl;
    cout << endl;

    /* Toggling the uppercase into lower and lower to upper*/
    char n[] = "HaRsH";
    for (int i = 0; n[i] != '\0'; i++)
    {
        if (n[i] >= 65 && n[i] <= 'Z')
        {
            n[i] += 32;
        }
        else if (n[i] >= 'a' && n[i] <= 122)
        {
            n[i] -= 32;
        }
        cout << "Toggling b/w upper and lower case " << n << endl;
    }

    return 0;
}