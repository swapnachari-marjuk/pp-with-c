#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number to check is it an even: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Yes! %d is a even number.\n", n);
    }
    else{
        printf("%d is an odd number.\n", n);
    }

    return 0;
}