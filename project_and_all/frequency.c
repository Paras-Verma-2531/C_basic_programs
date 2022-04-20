#include<stdio.h>
#include<string.h>
int main()
{
int i,c=0;
char str[100];
char ch,ch1;
printf("enter a string\n");
scanf("%s\n",str);
printf("enter a character whose frequency is to be searched\n");
scanf("%c",&ch);
int a=strlen(str);
for(i=0;i<a;i++)
{
ch1=str[i];
if(ch.equals(ch1)==0)
{
c+=1;
}
}
if(c>0)
{
printf("character %c is present %d times\n",ch,c);
}
else
{
printf("character %c is  not present \n",ch);
}
return 0;
}