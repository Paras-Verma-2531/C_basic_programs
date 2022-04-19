# include <stdio.h> 
void readFile(FILE *ptr);
int num;int i=0;int array[30];
void print_file(FILE *ptr);
void writeAnotherFile(FILE *ptr);
int main() {
    FILE *ptr,*ptr1;
    ptr=fopen("textfile.txt","r");
    ptr1=fopen("array_element.txt","a");
    readFile(ptr);
    fclose(ptr);
    print_file(ptr);
    writeAnotherFile(ptr1);
    return 0 ;
}

void readFile(FILE *ptr)
{
    if(ptr==NULL){printf("file does not exist\n");}
    while(!feof(ptr))
    { 
        fscanf(ptr,"%d",&array[i]);
        i++;
    }
}
void print_file(FILE *ptr)
{
  for(int j=0;j<i;j++)
    {
        printf("%d\n",array[j]);
    }
}
void writeAnotherFile(FILE *ptr)
{
    for(int j=0;j<i;j++)
    {
        fprintf(ptr,"%d\n",array[j]);
    }
}