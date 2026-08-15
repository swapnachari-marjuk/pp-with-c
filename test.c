#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkingPalindrome(char *strArr, int n)
{
    // printf("in start strArr is %s\n", strArr);

    // making a temp array to hold original array.
    char tempStr[n + 1];
    strcpy(tempStr, strArr); // copied by using strcpy.

    int leftIn = 0;
    int rightIn = n - 1;

    //reversing array
    while (leftIn < rightIn)
    {
        char swapTemp = strArr[leftIn];
        strArr[leftIn] = strArr[rightIn];
        strArr[rightIn] = swapTemp;

        leftIn++;
        rightIn--;
    }

    // printf("in last temp is %s\n", tempStr);
    // printf("in last strArr is %s\n", strArr);

    // comparing if both of array are same by using "strcpm()" (palindrome word checking)

    if (strcmp(strArr, tempStr) == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int str_size;
    char *str;

    printf("Enter the string size: ");
    scanf("%d", &str_size);

    getchar(); // to cleaning buffer.

    // allocating memory by using malloc (dma)
    str = (char *)malloc((str_size + 1) * sizeof(char));

    //checking if allocate failed.
    if (str == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter your string: ");
    fgets(str, str_size + 1, stdin);

    // fgets দিয়ে নেওয়া স্ট্রিংয়ের শেষের Enter (\n) সরাতে
    str[strcspn(str, "\n")] = '\0';

    // আসল সাইজ মেপে নেওয়া (যদি ইনপুট সাইজের চেয়ে ছোট দেয়)
    int actual_length = strlen(str);

    int result = checkingPalindrome(str, str_size);

    if (result == 0)
    {
        printf("Yes! Your string is a palindrome.\n");
    }
    else
    {
        printf("It wasn't a palindrome.\n");
    }

    // printf("%d\n", result);

    free(str);
    return 0;
}