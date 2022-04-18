#include <stdio.h>
# include<string.h>
void length_check(char st[],int m,int n)
{
    int i = 0, c = 0;
    while (st[i] !='\0')
    {
        c++;
        i++;
    }
    printf("the length  of string %s  is %d ",st, c);
    while(m<n) // substring ---->
    {
        printf("%c",st[m]);  // substring ---->
        m++;
    }
}
void occuernce(char st[],char ch)
{
    int s,i,c=0;
    s=strlen(st);
    for(i=0;i<s;i++)
    {
        if(ch==st[i])
        {
            c++;
        }
    }
    if(c>1)
    {
        printf("the character %c is present %d times",ch,c);
    }
    else{
        printf("the character %c is not present",ch);
    }
}
int main()
{
    //char str[] = "paras verma";
    // int i = 0;
    // while (str[i] != '\0')
    // {
    //     printf("%c", str[i]);
    //     i++;
    // }
    //printf("\n");
    //printf("%s",str);
    // char st[12];
    // printf("enter your name..\n");
    // //scanf("%s",st);  //cannot be  used for multiline string...>
    // gets(st); // used for multiline string...>
    // printf("you name is %s\n ",st);
    // int a= strlen(st); //prints length of the string..>
    // printf("the length of string is %d\n",a);
    // char *st1="paras";
    // char st2[45];
    // strcpy(st2,st1);
    // printf("now the st2 is %s\n",st2);
    // char st[15];
    // char st1[10];
    // printf("enter your first name \n");
    // gets(st);
    // printf("enter your last name\n");
    // gets(st1);
    // printf("your full name is %s\n ",strcat(st,st1));
    char str[] = "paras";
    //length_check(str,1,4);
    occuernce(str,'b');

    return 0;
}

