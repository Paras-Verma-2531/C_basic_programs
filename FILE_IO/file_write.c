#include <stdio.h>
int main()
{
    FILE *ptr;

    // for (int i = 1; i <=5; i++)
    // {
    //      ptr = fopen("Table of %d .txt", i,"w");
    //      for (int j = 1; i <=10; i++)
    //      {
    //         fprintf(ptr," %d X %d = ",i,j,(i*j));
    //      }
         

    // }
    
   
    //int num = 765;
    ptr=fopen("filewrite.txt","w");
    char ch[]="paras verma ";
    fprintf(ptr, "my name is %s", ch);//      ------>>method to write data in file

    fclose(ptr);

    return 0;
}
