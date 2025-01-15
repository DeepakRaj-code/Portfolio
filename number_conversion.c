//program to convert decimal to binary,decimal to octal,binary to decimal,binary to octal

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int r, s = 0, c = 0, l, x;
int binary(int b)
{
    printf("enter in which you have to convert: \n");
    printf("1 for decimal\n2 for octal\n");
    scanf("%d", &x);
    if (x == 1)
    {
        while (1)
        {
            r = b % 10;
            s = r * pow(2, c) + s;
            if (b == 1)
            {
                break;
            }
            b = b / 10;
            c++;
        }
        printf("Binary to decimal answer is %d", s);
    }
    else if (x == 2)
    {
        while (1)
        {
            r = b % 10;
            s = r * pow(8, c) + s;
            if (b == 1)
            {
                break;
            }
            b = b / 10;
            c++;
        }
        printf("Binary to Octal answer is %d", s);
    }
}
void decimal(const char d[l])
{
    printf("enter in which you have to convert: \n");
    printf("1 for binary\n2 for octal\n");
    scanf("%d", &x);
    if (x == 1)
    {
        int a = atoi(d);
        int arr[100];
        while (1)
        {
            arr[c++] = a % 2;
            a = a / 2;
            if (a == 0)
            {
                break;
            }
        }
        printf("Decimal to binary answer is: ");
        for (int i = c - 1; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }
    }
    else if (x==2)
    {
        int a = atoi(d);
        int arr[100];
        while (1)
        {
            arr[c++] = a % 8;
            a = a / 8;
            if (a == 0)
            {
                break;
            }
        }
        printf("Decimal to octal is: ");
        for (int i = c - 1; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }
    }
}
int main(int argc, char const *argv[])
{
    int b, z;
    char d[100];
    printf("enter the number system to be inputed: \n");
    printf("1 for decimal\n2 for binary\n");
    scanf("%d", &z);
    if (z == 2)
    {
        printf("enter binary number ");
        scanf("%d", &b);
        binary(b);
    }
    if (z == 1)
    {
        printf("enter decimal number ");
        scanf("%s", d);
        l = strlen(d);
        decimal(d);
    }
    return 0;
}