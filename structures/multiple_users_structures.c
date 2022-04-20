# include <stdio.h>
#include <string.h>
struct employee
{
    int age;
    long mobile_number;
    char name[50];
};
int main() {
    struct employee MNC[5];
    int i=0;
    while(i<5)
    {
        printf(" enter the name of %d employee :\n",((i+1)));
        gets(MNC[i].name);
        printf("enter the age of %d employee: \n",(i+1));
        scanf("%d",&MNC[i].age);

        printf("enter the phone number of %d employee :\n",(i+1));
        scanf("%ld",&MNC[i].mobile_number);
        i++;
    }
 return 0 ;
}
