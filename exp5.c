#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0, j, k, left = 0, right = 0;
    int valid = 1, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);
    j = len - 1;

    /* Count 0s at the beginning */
    while (i < len && str[i] == '0')
    {
        left++;
        i++;
    }

    /* Check middle 1s */
    while (i < len && str[i] == '1')
        i++;

    /* Count 0s at the end */
    k = i;
    while (k < len && str[k] == '0')
    {
        right++;
        k++;
    }

    /* Check conditions */
    if (i == len && left == 0)
        valid = 1; /* All 1s */

    else if (k == len && left == right)
        valid = 1;

    else
        valid = 0;

    if (valid)
        printf("String belongs to the CFG\n");
    else
        printf("String does not belong to the CFG\n");

    return 0;
}