# include <stdio.h> 
#include<string.h>
char *input_String(char *string);
char *convert(char *string,int length);
int main() {
    int length;
    printf("enter the length of string: ");
    scanf("%d",&length);
    char string[length];
    char *str=string;
    char *new_str=input_String(str);
    char copy[30];
    strcpy(copy,new_str);
    char *converted=convert(new_str,strlen(new_str));
    printf(" the string %s in lowercase is %s",copy,converted);
    return 0 ;
}
char *input_String(char *string)// returns the input string address
{
    printf("enter the string in uppercase : ");
    fflush(stdin);
    gets(string); // inputs the string from user as a char pointer
    return string;
}
char *convert(char *string,int length) // returns the converted string through it's pointer
{
    for(int i=0;i<length;i++)
    {
        if(*(string+i)==' '){continue;}
        int n=(int)(*(string+i))+32;
        *(string+i)=(char)n; // converts the character to lowercase by adding 32 to it's ASCII  code
    }
    return string;
}
