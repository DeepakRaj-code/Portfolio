//listing student details

#include <stdio.h>
#include <string.h>
int j = 0, roll, t;
struct school_management
{
    char name[30];
    int rollno;
    char adress[50];
    char bloodgrp[3];
    int phoneno;
} deep[60];

int main(int argc, char const *argv[])
{
    struct school_management a1;
    int r, c = 0,z;
    char b[30];
    char ad[50];
    printf("enter for giving and receiving details:  \n");
    while (1)
    {
        printf("1 for inserting student data\n2 for searching the student\n3 for counting the total students\n4 for delete a student details\n5 for update a student\n6 to show the details of all students\n");
        scanf("%d", &r);
        if (r == 1)
        {
            while (1)
            {
                printf("enter student details: \n");
                printf("enter student name: ");
                scanf("%s", &b);
                strcpy(deep[j].name, b);

                printf("enter the adress of the students: ");
                scanf("%s", &ad);
                strcpy(deep[j].adress, ad);
                printf("enter the blood group: ");
                scanf("%s", &deep[j].bloodgrp);
                printf("enter phonenumber: ");
                scanf("%d", &deep[j].phoneno);
                deep[j].rollno = j + 1;
                j++;
                printf("if you want to give more details then enter 1\n");
                scanf("%d", &z);
                if (z != 1)
                {
                    break;
                }
                z = 0;
            }
        }
        if (r == 2)
        {
            printf("enter the student rollno to be searched\n");
            scanf("%d", &roll);
            for (int i = 0; i < j+1; i++)
            {
                if (roll == i+1)
                {
                    printf("%s\n%d\n%s\n%s\n%d\n",deep[i].name, deep[i].rollno, deep[i].adress, deep[i].bloodgrp, deep[i].phoneno);
                    c = 1;
                }
            }
            if (c != 1)
            {
                printf("sorry roll number not found\n");
            }
            c = 0;
        }
        if (r == 3)
        {
            for (int i = 0; i < j; i++)
            {
                c++;
            }
            printf("total students are: %d\n", c);
            c = 0;
        }
        if (r == 4)
        {
            printf("enter the student rollno for which student details should be deleted\n");
            scanf("%d", &roll);
            for (int i = 0; i < deep[j].rollno; i++)
            {
                if (roll == i)
                {
                    for (int k = i; k < j+1; k++)
                    {
                        deep[k] = deep[k + 1];
                    }
                    j--;
                }
            }
        }
        if (r == 5)
        {
            printf("enter student details: \n");
            printf("enter student name: ");
            scanf("%s", &b);
            strcpy(deep[j].name, b);

            printf("enter the adress of the students: ");
            scanf("%s", &ad);
            strcpy(deep[j].adress, ad);
            printf("enter the blood group: ");
            scanf("%s", &deep[j].bloodgrp);
            printf("enter phonenumber: ");
            scanf("%d", &deep[j].phoneno);
            deep[j].rollno = j + 1;
            j++;
            printf("if you want to give more details then enter 1\n");
            scanf("%d", &c);
        }
        if (r == 6)
        {
            for (int i = 0; i < j; i++)
            {
                printf("%d person detail is:  ",i+1);
                printf("name is: %s   adress is: %s\nrollnumber is: %d   blood group: %s   phone number is: %d\n", deep[i].name, deep[i].adress, deep[i].rollno, deep[i].bloodgrp, deep[i].phoneno);
            }
        }
        printf("if you modify more  then click 1\n");
        scanf("%d", &t);
        if (t != 1)
        {
            break;
        }
    }
    return 0;
}
