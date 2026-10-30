#include <stdio.h>

int main()
{
    int n, i, j, m, a, b;
    int e[10][10] = {0}, closure[10][10] = {0};

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
        closure[i][i] = 1;

        for (j = 0; j < n; j++)
        {
            if (e[i][j])
                closure[i][j] = 1;
        }
    }

    for (int k = 0; k < n; k++)
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (closure[i][k] && closure[k][j])
                    closure[i][j] = 1;

    printf("\nEpsilon Closure:\n");
    for (i = 0; i < n; i++)
    {
        printf("E-closure(q%d) = { ", i);
        for (j = 0; j < n; j++)
            if (closure[i][j])
                printf("q%d ", j);
        printf("}\n");
    }

    return 0;
}
