#include <iostream>
#include "lab1.h"
using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\n===== CD Lab 1 =====" << endl;
        cout << "1. Numeric constant" << endl;
        cout << "2. Operators" << endl;
        cout << "3. Comment lines" << endl;
        cout << "4. Identifier" << endl;
        cout << "5. Average of array" << endl;
        cout << "6. Min and max of array" << endl;
        cout << "7. Full name" << endl;
        cout << "0. Exit" << endl;
        cout << "Choose: ";

        if (!(cin >> choice))
        {
            break;
        }

        switch (choice)
        {
            case 1: question1(); break;
            case 2: question2(); break;
            case 3: question3(); break;
            case 4: question4(); break;
            case 5: question5(); break;
            case 6: question6(); break;
            case 7: question7(); break;
            case 0: cout << "Bye" << endl; break;
            default: cout << "Invalid choice" << endl;
        }
    } while (choice != 0);

    return 0;
}
