#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, valid = 1;
    int len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    if (len < 2 || str[0] != '0' || str[len - 1] != '1')
    {
        valid = 0;
    }
    else
    {
        for (i = 1; i < len - 1; i++)
        {
            if (str[i] != '0' && str[i] != '1')
            {
                valid = 0;
                break;
            }
        }
    }

    if (valid)
        printf("String belongs to the CFG\n");
    else
        printf("String does not belong to the CFG\n");

    return 0;
}