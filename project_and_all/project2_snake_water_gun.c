#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char getvalue()
{
    char comp;
    srand(time(0));
    int number = rand() % 3 + 1;
    //printf("%d",number);
    if (number == 1)
    {
        comp = 's';
        return comp;
    }
    else if (number == 2)
    {
        comp = 'p';
        return comp;
    }
    else
    {
        comp = 'r';
        return comp;
    }
}
int main()
{
    int i = 1;
    char choice;

    printf("this would be a 5 match game.. hope u will make it...!!\n");
    for (i = 1; i <= 5; i++)
    {

        char comp = getvalue();

        printf("enter 's' for stone,'p' for paper and 'r' for scissor\n");
        scanf("%c", &choice);
        if (choice == comp)
        {
            printf("match drawn!!\n");
        }
        else if (choice == 's')
        {
            if (comp == 'p')
            {
                printf("you loose!!\n");
                printf("computer chooses : %c\n", comp);
                break;
            }
            else
            {
                printf("you win!!!\n");
                printf("computer chooses : %c\n", comp);
                break;
            }
        }
        else if (choice == 'p')
        {
            if (comp == 's')
            {
                printf("you win!!!\n");
                printf("computer chooses : %c\n", comp);
                break;
            }
            else
            {
                printf("you loose!!\n");
                printf("computer chooses : %c\n", comp);
                break;
            }
        }
        else
        {
            if (comp == 's')
            {
                printf("you loose!!\n");
                printf("computer chooses : %c\n", comp);
                break;
            }
            else
            {
                printf("you win!!\n");
                printf("computer chooses : %c\n", comp);
                break;
            }
        }
    }

    return 0;
}
