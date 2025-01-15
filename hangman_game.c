#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int ctr = 0;
    srand(time(NULL));
    char *b[][2] = {
        {"what is the element name which has grp 13 and period 5", "indium"},
        {"what is the speed of the car if distance is 50.0m and time is 2.0 seconds (answer correct to one decimal point)", "25.0"},
        {"which is known as the most found element", "hydrogen"},
        {"which is the national bird", "peacock"},
        {"Which animal is known as the Ship of the Desert?", "camel"},
        {"How many days are there in a week?", "7"},
        {"Baby frog is known as.......", "tadpole"},
        {"Who discovered the neutron?", "chadwick"},
        {"Which gas is most abundant in Earth atmosphere?", "nitrogen"},
        {" Who wrote The Theory of Relativity?", "albert_einstein"},
        {"Which gas is used for inflating balloons?", "helium"}};
    int chance=4;
    printf("You have 3 chance to answer the question\nLet's Start!!\n");
    while (1)
    {
        int a = rand() % 11;
        const char *question = b[a][0];
        const char *answer = b[a][1];
        char ans[strlen(answer)];

        printf("%s\n", question);

        while (chance != 0)
        {
            scanf("%s", ans);

            if (strcmp(ans, answer) == 0)
            {
                printf("correct answer\n");
                int r;
                printf("if you want to play more then click 1 \n");
                scanf("%d", &r);
                if (r == 1)
                {
                    break;
                }
            }
            else
            {
                chance--;
                printf("wrong answer!!\n");
                if (chance == 3)
                {
                    printf("|\n|\n|\n|\n");
                }
                else if (chance == 2)
                {
                    printf("_______________\n|/\n|\n|\n|\n");
                }
                else if (chance == 1)
                {
                    printf("_______________\n|/            \n|           \\%c\n|            |\\ \n|           / \\ \n", (char)2);
                }
                else
                {
                    printf("_______________\n|/           |\n|            %c--->dead   \n|           /|\\ \n|           / \\ \n|         \n|\n", (char)2);
                }
            }
        }
        if (chance==0)
        {
            break;
        }
        
    }
    printf("Thanks for giving your time to us\nGAME OVER!!!\n");
    return 0;
}