# include <stdio.h>
int main() {
    int table[10];
    int n;
    printf("enter the digit whose table u want to print\n");
    scanf("%d",&n);
    for (int  i = 0; i < 10; i++)
    {
     table[i]=n*(i+1);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d X %d = %d ",n,(i+1),table[i]);
        printf("\n");
    }

 return 0 ;
}
