
#include <stdio.h>
// double average(int a,int b);
void force(int m);
int main()
{
    //printf("5 when divided by 2 leaves the remainder %d\n",5%2);
    // int a=4;
    // printf("%d\n",(a&1));
    // if((a&1)==1)
    // {
    //     printf("it is odd");
    // }
    // else
    // {
    //     printf("not odd");
    // int n;
    // printf("enter a number \n");
    // scanf("%d",&n);
    // if(n%97==0)
    // {
    //     printf("number is divisble by 97\n");
    // }
    // else
    // {
    //     printf("number is not divisble by 97\n");
    // }
    // double k= average(34,77);
    // printf("the average is %f",k);
    int m;
    printf("enter mass of the body \n");
    scanf("%d", &m);
    force(m);
    //printf("the force on the body is %f\n",ans1);
    return 0;
}
// double average(int a,int b)
// {
//     double avg=(double)(a+b)/2;
//     return avg;
void force(int m)
{
    float k = 9.8;
    float ans = k * m;
    printf("the force on the body is %.2f N", ans);
}
