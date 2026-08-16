#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    bool is_prime = true;

    if (n <= 1)
    {
        is_prime = false;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                is_prime = false;
                break;
            }
        }
    }

    if (is_prime == true)
    {
        printf("It's a prime number.\n");
    }
    else if (is_prime == false)
    {
        printf("It's not a prime number.\n");
    }

    return 0;
}