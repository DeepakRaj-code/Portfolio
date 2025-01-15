//program to find the triangle using alphabets words

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,b,a=65;
    printf("Enter the number n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        b=a;
        for (int j = n; j > i+1; j--)
        {

            printf("  ");
        }
        for (int k = 0; k < i+1; k++)
        {
            printf("%c ",(char)b);
            b++;
        }
        printf("\n");
    }
    return 0;
}
