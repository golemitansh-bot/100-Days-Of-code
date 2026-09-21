#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0, flag = 0;

    scanf("%s", str);

    // Find length of string
    while (str[length] != '\0')
    {
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    // Print result
    if (flag == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}
