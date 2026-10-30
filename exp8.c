#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    if (str[0] != 'b' || str[len - 1] != 'a')
        flag = 0;

    for (i = 0; i < len; i++)
    {
        if (str[i] != 'a' && str[i] != 'b')
        {
            flag = 0;
            break;
        }
    }

    if (flag && len >= 2)
        printf("String accepted by NFA");
    else
        printf("String rejected by NFA");

    return 0;
}
