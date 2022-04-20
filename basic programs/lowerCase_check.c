# include <stdio.h>
int main() {
    char c;
    int a=0;
    printf("enter a character\n");
    scanf("%c",&c);
   //printf("%d\n",(int)c );
    for (int i = 97; i <=122; i++)
    {
        if((int)c==i)
        {
          a+=1;
         break;
    }
    }
    if(a==1)
    {
    printf("character is in lower case\n");
    }
    else{
        printf("character is not lower case\n");
    }
    

 return 0 ;
}