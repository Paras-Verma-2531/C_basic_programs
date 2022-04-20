# include <stdio.h>
// # include <stdlib.h>
// # include <time.h>

int main() {
   // int marks[]=new int[5];
    int marks[5];
    
    for(int i=0;i<5;i++)
    {
        printf("enter marks of %d subject.\n",i+1);
        scanf("%d",&marks[i]);
    }
    printf("the marks are :\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",marks[i]);
    }
    //  int a=5,b=6;
    // a=a+b; //a=11-------->swaping of a number
    // b=a-b; //11-6=5 -------->swaping of a number
    // a=a-b;          -------->swaping of a number
    // printf("the value of a and b is %d , %d\n ",a,b);
    // int number;
    // srand(time(0));
    // number=rand()%10+1;
    // printf("%d\n",number);
     
 return 0 ;
}
