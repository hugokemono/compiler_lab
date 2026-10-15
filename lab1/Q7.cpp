#include <iostream>
using namespace std;

void question7()
{
    char first[50] = "", last[50] = "", full[101];
    int i = 0, j = 0;

    cout << "Enter first name: ";
    cin >> first;
    cout << "Enter last name: ";
    cin >> last;

    while (first[i] != '\0')
    {
        full[j] = first[i];
        i++;
        j++;
    }

    full[j] = ' ';
    j++;

    i = 0;
    while (last[i] != '\0')
    {
        full[j] = last[i];
        i++;
        j++;
    }
    full[j] = '\0';

    cout << "full name = \"" << full << "\"" << endl;
}
