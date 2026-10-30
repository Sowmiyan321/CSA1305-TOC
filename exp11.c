#include <stdio.h>

int main()
{
    int n, m, i, j, k, a, b;
    int e[10][10] = {0}, c[10][10] = {0};

    printf("Enter number of states: ");
    scanf("%d", &n);

    printf("Enter number of epsilon transitions: ");
    scanf("%d", &m);

    printf("Enter transitions (from to):\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d%d", &a, &b);
        e[a][b] = 1;
    }

    for (i = 0; i < n; i++)
    {
        c[i][i] = 1;
        for (j = 0; j < n; j++)
            c[i][j] = c[i][j] || e[i][j];
    }

    for (k = 0; k < n; k++)
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (c[i][k] && c[k][j])
                    c[i][j] = 1;

    printf("\nEpsilon Closure:\n");
    for (i = 0; i < n; i++)
    {
        printf("E-closure(q%d) = { ", i);
        for (j = 0; j < n; j++)
            if (c[i][j])
                printf("q%d ", j);
        printf("}\n");
    }

    return 0;
}
