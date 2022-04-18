#include <stdio.h>
int main()
{
  FILE *ptr;
  int num;
 // ptr = fopen("first1.txt", "r");
  ptr = fopen("readAns.txt", "r");
  if(ptr==NULL) 
  { printf("file does not exist\n");
    }
   else{ //----->    used for reading the data of the file:::
  fscanf(ptr, "%d", &num);
  //fprintf(ch);
  printf(" the value of num is : %d\n",num);
  fscanf(ptr, "%d", &num);
  printf(" the value of num is : %d\n",num);
  fscanf(ptr, "%d", &num);
  printf(" the value of num is : %d\n",num);
  fclose(ptr);
  return 0;
}
}


