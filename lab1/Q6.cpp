#include <iostream>
using namespace std;

void question6()
{
    int a[100], n, i, min, max;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "invalid size" << endl;
        return;
    }

    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    min = a[0];
    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    cout << "minimum = " << min << endl;
    cout << "maximum = " << max << endl;
}
