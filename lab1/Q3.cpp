#include <iostream>
using namespace std;

void question3()
{
    char line[200] = "";
    int i;

    cout << "Enter line(s), press Enter after each line: ";
    cin >> ws;
    cin.getline(line, 200);

    if (line[0] == '/' && line[1] == '/')
    {
        cout << "single line comment" << endl;
        return;
    }

    if (line[0] == '/' && line[1] == '*')
    {
        i = 2;
        while (true)
        {
            while (line[i] != '\0')
            {
                if (line[i] == '*' && line[i + 1] == '/')
                {
                    cout << "multi line comment" << endl;
                    return;
                }
                i++;
            }

            cin >> ws;
            if (!cin.getline(line, 200))
            {
                break;
            }
            i = 0;
        }
        cout << "not a comment (comment is not closed)" << endl;
        return;
    }

    cout << "not a comment" << endl;
}
