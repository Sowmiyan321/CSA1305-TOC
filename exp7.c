#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, flag = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    for (i = 0; i <= len - 3; i++)
    {
        if (strncmp(str + i, "101", 3) == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("String belongs to the CFG");
    else
        printf("String does not belong to the CFG");

    return 0;
}
