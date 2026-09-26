#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    scanf("%s", str1);
    scanf("%s", str2);

    // Rotations must have the same length
    if (strlen(str1) != strlen(str2))
    {
        printf("Not rotation");
        return 0;
    }

    // Join str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check whether str2 exists inside str1 + str1
    if (strstr(temp, str2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
