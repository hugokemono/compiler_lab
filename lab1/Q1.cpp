#include <iostream>
using namespace std;

void question1()
{
    char s[100] = "";
    int i = 0;
    bool ok = true;

    cout << "Enter input: ";
    cin >> ws;
    cin.getline(s, 100);

    if (s[0] == '\0')
    {
        ok = false;
    }

    while (s[i] != '\0')
    {
        if (s[i] < '0' || s[i] > '9')
        {
            ok = false;
            break;
        }
        i++;
    }

    if (ok)
    {
        cout << "numeric constant" << endl;
    }
    else
    {
        cout << "not numeric" << endl;
    }
}
