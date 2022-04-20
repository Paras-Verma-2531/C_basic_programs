#include <stdio.h>
void input(int, int, int);
void binary_con(int base, int number);
//void decimal_con(int base, int number);
//void hexadecimal_con(int base, int number);
//void octal_con(int base, int number);
void conversion(int number);
void check_base(int base,int  req_base);
int req_base;

int main()
{
    printf("**** WELCOME TO THE NUMBER SYSTEM CONVERTOR ****\n");
    printf("FOLLOW THE GIVEN STEPS TO GET THE OUTPUT WITHOUT ANY ERROR::\n");
    printf("1. ENTER THE BASE OF YOUR NUMBER :\n");
    printf("2. ENTER THE NUMBER :\n ");
    printf("3. ENTER THE DESIRED BASE :\n");
    printf("***** the allowed bases are : 10[decimal]/2[binary]/8[octal]/16[hexadecimal] *****\n");
    int number, base;
    // printf("enter the base of your number\n");
    // scanf("%d",&base);
    // printf("enter the number\n");
    // scanf("%d",&number);
    printf("enter the desired base\n");
    scanf("%d", &req_base);
    input(10, 6, req_base);
    return 0;
}
void input(int base, int number, int req_base)
{
    if(base==req_base)
    {
        printf("similar conversion not possible\n");
    }
    else{
    switch (base)
    {
    case 10:
     check_base(base,req_base);
        break;
    case 2:
    check_base(base,req_base);
    break;
    case 8:
    check_base(base,req_base);
    break;
    case 16:
    check_base(base,req_base);
    break;
    default:
    {
        printf("invalid base\n");
    }
    
    }
    }
}

void binary_con(int base, int number)
{
    switch (base)
    {
    case 10:
        printf("number is converted from base 10 to base 2\n");
        conversion(number);
        break;
    case 8:
        printf("number is converted from base 8 to base 2\n");
        break;
    case 16:
        printf("number is converted from base 16 to base  2\n");

    default:
    {
        printf("invalid base\n");
    }
    break;
    }
}
void check_base(int base, int req_base)
{
    switch (req_base)
    {
    case 10:
        //decimal_con(base, req_base);
        break;
    case 2:
        binary_con(base, req_base);
        break;
    case 8:
        //octal_con(base, req_base);
        break;
    case 16:
        //hexadecimal_con(base, req_base);
        break;

    default:
    {
        printf("invalid desired base\n");
    }
    }
}
void conversion(int number)
{
    if (number == 0)
        return;
    conversion(number/req_base);
    printf("%d", number%req_base);
}