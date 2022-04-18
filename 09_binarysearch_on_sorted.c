# include <stdio.h> 
void setsize(int *m);
void setelements(int *ptr,int size);
void sortArray(int *ptr,int size);
char *search(int *ptr,int size,int num);
int main() {
    int size,number;
    setsize(&size); // set the size of array
    int array[size]; // array declaration
    int *ptr=array;// declaration and initializatin=on of pointer
    setelements(ptr,size); // set the elements in array
    sortArray(ptr,size);
    printf("enter the number to be search :");
    scanf("%d",&number);
    char *result=search(ptr,size,number);
    printf("%s",result);
   return 0 ;
}
void setsize(int *m) // set the size by call by reference
{
    int a;
    printf("enter the size of array: ");
    scanf("%d",&a);
    *m=a;
}
void setelements(int *ptr,int size) // sets the elements through pointers
{ 
    for(int i=0;i<size;i++)
    {
        printf("enter the %d element: ",(i+1));
        scanf("%d",(ptr+i));
    }
}
void sortArray(int *ptr,int size) // sort the array in ascending order through pointers
{
    int t=0;
    for(int i=0;i<size-1;i++)
    {
        for (int j = 0;j<size-i-1;j++)
        {
          if(*(ptr+j)>*(ptr+j+1)){
            t=*(ptr+j); *(ptr+j)=*(ptr+j+1);*(ptr+j+1)=t;
          }
        }
    }
}
char *search(int *ptr,int size,int number) // returns address of a string(sucess/failure) 
 {
    int lb=0,ub=size-1,p=0;
    while(lb<=ub)
    {
        p=(lb+ub)/2; // l
        if(number>*(ptr+p)){lb=p+1;} // if no. is greater than the mid[pos] then increase lb by 1
        else if(number<*(ptr+p)){ub=p-1;}//if no. is smaller than the mid[pos] then decrease ub by 1
        else if(number==*(ptr+p)){return "success";} //  if matches, return success
    }
    return "failure"; // else failure
}
