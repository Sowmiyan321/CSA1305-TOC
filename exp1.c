#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (str[0] == 'a' && str[strlen(str) - 1] == 'a')
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}