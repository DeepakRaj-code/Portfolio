//same numbers in background pattern

#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number from 1-9 term --> ");
    scanf("%d", &n);
    int value = n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (i == k + 1 || j == k + 1 || i == (2 * n - 1) - k || j == (2 * n - 1) - k)
                {
                    value = n - k;
                    break;
                }
            }
            printf("%d ", value);
        }
        printf("\n");
    }

    return 0;
}