# include <stdio.h> 
void setsize(int *m,int *n);
void setelements(int *ptr,int size,int *ptr2,int size2);
void merge(int *ptr1,int size,int *ptr2,int size1,int *ptr3);
void display(int *ptr,int size);
int main() {
    int size1,size2,size3;
    setsize(&size1,&size2);
    int array1[size1];int array2[size2];
    int *ptr1=array1; int *ptr2=array2; size3=size1+size2;
    int array3[size3];int *ptr3=array3;
    setelements(ptr1,size1,ptr2,size2);
    merge(ptr1,size1,ptr2,size2,ptr3); // merge the two array through pointers
    display(ptr3,size3); //  display the merged array through it's pointer
    return 0 ;
}
void setsize(int *m,int *n) // set the size by call by reference
{
    int a,b;
    printf("enter the size of  first array: ");
    scanf("%d",&a);
    printf("enter the size of second array: ");
    scanf("%d",&b);
    *m=a;*n=b;
}
void setelements(int *ptr,int size,int *ptr2,int size2) // sets the elements through pointers
{ 
    printf("enter the elements of first array:\n");
    for(int i=0;i<size;i++)
    {
        printf("enter the %d element: ",(i+1));
        scanf("%d",(ptr+i));
    }
    printf("enter the elements of second array:\n");
    for(int i=0;i<size2;i++)
    {
        printf("enter the %d element: ",(i+1));
        scanf("%d",(ptr2+i));
    }
}
void merge(int *ptr1,int size,int *ptr2,int size1,int *ptr3)
{
    // merging the arrays with the help of their pointers
    for(int i=0;i<size;i++)
    {
        *(ptr3+i)=*(ptr1+i);
    }
    for(int j=0;j<size1;j++)
    {
        *(ptr3+size+j)=*(ptr2+j);
    }
}
void display(int *ptr,int size)
{
    printf("the merged  array is :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",*(ptr+i));
    }
}