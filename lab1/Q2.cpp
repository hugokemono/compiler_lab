#include <iostream>
using namespace std;

void question2()
{
    char s[100] = "";
    int i = 0, count = 0;

    cout << "Enter expression: ";
    cin >> ws;
    cin.getline(s, 100);

    while (s[i] != '\0')
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '=')
        {
            count++;
            cout << "operator" << count << ": " << s[i] << endl;
        }
        i++;
    }

    if (count == 0)
    {
        cout << "no operators found" << endl;
    }
}
