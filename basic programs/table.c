# include <stdio.h>
int main() {
    int number,f=1,s=0;
    printf("enter the number whose table u want to see..\n");
    scanf("%d",&number);
    for (int i = 1; i<=10; i++)
    {
        printf("%d X %d = %d \n",number,i,number*i);
         f=i*number;
         s=s+f;

    }
    printf("the sum is %d ",s);
    
 return 0 ;
}