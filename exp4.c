#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    i = 0;
    j = strlen(str) - 1;

    while (i < j)
    {
        if (str[i] != str[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag)
        printf("String belongs to the CFG\n");
    else
        printf("String does not belong to the CFG\n");

    return 0;
}