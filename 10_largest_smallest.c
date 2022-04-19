# include <stdio.h> 
void setsize(int *m);
void setelements(int *ptr,int size);
void sortArray(int *ptr,int size);
void result(int *min,int *max,int *ptr,int size);
int main() {
    int size,number,min=0,max=0;
    setsize(&size); // set the size of array
    int array[size]; // array declaration
    int *ptr=array;// declaration and initializatin=on of pointer
    setelements(ptr,size); // set the elements in array
    sortArray(ptr,size);
    result(&min,&max,ptr,size);
    printf("the minimum number is :  %d and maximum number is : %d ",min,max);
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
void result(int *min,int *max,int *ptr,int size)
{
    *min=*(ptr+0);
    *max=*(ptr+size-1);

}