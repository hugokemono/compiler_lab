#include <iostream>
using namespace std;

void question4()
{
    char s[100] = "";
    int i = 1;
    bool ok = true;

    cout << "Enter input: ";
    cin >> ws;
    cin.getline(s, 100);

    if (!((s[0] >= 'A' && s[0] <= 'Z') || (s[0] >= 'a' && s[0] <= 'z') || s[0] == '_'))
    {
        ok = false;
    }

    while (ok && s[i] != '\0')
    {
        if (!((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || s[i] == '_' || (s[i] >= '0' && s[i] <= '9')))
        {
            ok = false;
        }
        i++;
    }

    if (ok)
    {
        cout << "identifier" << endl;
    }
    else
    {
        cout << "not an identifier" << endl;
    }
}
