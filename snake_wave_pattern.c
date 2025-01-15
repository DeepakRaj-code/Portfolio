//snake wave pattern program

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, a = 1,b=1;
    printf("enter the number n:  ");
    scanf("%d", &n);
    while (1)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("  ");
            }
            printf("*\n");
            a++;
            if (a == n+1)
            {
                b = 0;
                break;
            }
        }
        if (b == 0)
        {
            break;
        }
        for (int i = 0; i < 1; i++)
        {
            for (int j = 0; j < i+1; j++)
            {
                printf("  ");
            }
            printf("*\n");
            a++;
            if (a == n+1)
            {
                b = 0;
                break;
            }
        }
        if (b == 0)
        {
            break;
        }
    }
    return 0;
}
