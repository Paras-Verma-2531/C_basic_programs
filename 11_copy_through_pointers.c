# include <stdio.h> 
void setsize(int *m);
void setelements(int *ptr,int size);
void copy(int *ptr,int *ptr1,int size);
void display(int *ptr,int *ptr2,int size);
int main() {
    int size;
    setsize(&size);
    int array[size];
    int *ptr=array;
    setelements(ptr,size);
    int array1[size],*ptr1;
    ptr1=array1;
    copy(ptr,ptr1,size);
    display(ptr,ptr1,size);
    return 0 ;
}
void setsize(int *m)
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
void copy(int *ptr,int *ptr1,int size)
{
    for(int i=0;i<size;i++)
    {
        *(ptr1+i)=*(ptr+i); // copy the content of one array to another through their pointers
    }
}
void display(int *ptr,int *ptr2,int size) // displays the content of both the array through pointers
{
    printf("the elements of first array are :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",*(ptr+i));
    }
     printf("the elements of second array are :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",*(ptr2+i));
    }
}