#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    char result[20];
    int len, i;

    printf("Enter string :");
    scanf("%s", &str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        result[i] = str[len - i - 1];
    }

    result[len] = '\0';

    printf("reverse string : %s", result);

    if (strcmp(str, result) == 0)
    {
        printf("\nPalindrome");
    }
    else
    {
        printf("\nNot a palindrome");
    }

    return 0;
}