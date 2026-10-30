```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    if (len % 2 != 0) {
        flag = 0;
    } else {
        for (i = 0; i < len / 2; i++) {
            if (str[i] != '0' || str[len - 1 - i] != '1') {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        printf("String belongs to the CFG");
    else
        printf("String does not belong to the CFG");

    return 0;
}
```
