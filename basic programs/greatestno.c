# include <stdio.h>
int main() {
    int a,b,c,d;
    printf("enter 1st no.\n");
    scanf("%d",&a);
    printf("enter 2nd no.\n");
    scanf("%d",&b);
    printf("enter 3rd no.\n");
    scanf("%d",&c);
    printf("enter 4th no.\n");
    scanf("%d",&d);
    if(a>b&&a>c&&a>d)
    {
        printf("the greatest number is %d ",a);
    }
    else if (b>a&&b>c&&b>d)
    {
        printf("the greatest number is %d ",b);
    }
    else if (c>a&&c>b&&a>d)
    {
      printf("the greatest number is %d ",c);
    }
    else
    {
        printf("the greatest number is %d ",d);

    }
    
    

 return 0 ;
}