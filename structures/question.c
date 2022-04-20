# include <stdio.h>
// struct DOB
// {
//     int date;
//     int month;
//     int year;
// };
struct employee
{
    char name[100];
   int  salary;
    int joining_date;
    struct DOB d1;
    
    
};
int main() {
    struct employee  e1;
    printf("enter your name\n");
    scanf("%s",&e1.name);
    printf("enter your date of birth\n");
    scanf("%d %d %d",&e1.d1.date,&e1.d1.month,&e1.d1.year);
    printf("enter your salary\n");
    scanf("%d",&e1.salary);
    if(e1.d1.month==1)
    {
        printf("congrats!!\n");
    }
 return 0 ;
}