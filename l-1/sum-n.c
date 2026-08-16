#include <stdio.h>

int main()
{
    int a, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &a);

    // for (int i = 0; i <= a; i++)
    // {
    //     sum += i;
    // }

    int i = 0;
    while (i <= a)
    {
        sum += i;

        i++;
    }

    printf("Total of numbers form 1 to %d is %d.\n", a, sum);

    return 0;
}