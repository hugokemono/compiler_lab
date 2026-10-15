#include <stdio.h>

void question5()
{
    int a[100], n, i;
    double sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("invalid size\n");
        return;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("average = %.2f\n", sum / n);
}
