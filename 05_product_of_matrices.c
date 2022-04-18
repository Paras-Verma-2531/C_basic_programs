// to calculate the product of two matrices using pointers
# include <stdio.h> 
void input(int *ptr,int*ptr2,int size1,int size2);
void calculate(int *ptr,int*ptr2,int*ptr3,int size1);
void display(int *ptr,int size);
int main() {
    int *ptr,*ptr2;
    int size1,size2;
    printf("enter the size of first and second array: \n");
    scanf("%d",&size1);
    scanf("%d",&size2);
    int array[size1];
    int array2[size2];
    int array3[size1];
    ptr=array;
    ptr2=array2;
    int *ptr3=array3;
    input(ptr,ptr2,size1,size2);
    if(size1==size2) // to calculate the product only if the size of both the matrices are equal
    {
        calculate(ptr,ptr2,ptr3,size1);// function calling 
        display(ptr3,size1);
    }
    else{
        printf("enter the same size!!\n");
    }

    return 0 ;
}
void input(int *ptr,int*ptr2,int size1,int size2)
{
    printf("enter the elements of first array\n");
    for(int i=0;i<size1;i++)
    {
        printf("enter the %d element : ",(i+1));
        scanf("%d",(ptr+i));//assigning the input using pointers
    }
    printf("enter the elements of second array\n");
    for(int i=0;i<size2;i++)
    {
        printf("enter the %d element : ",(i+1));
        scanf("%d",(ptr2+i));//assigning the input using pointers
    }
}
void calculate(int *ptr,int*ptr2,int*ptr3,int size1)
{
    for(int i=0;i<size1;i++)
    {
        *(ptr3+i)=(*(ptr+i))*(*(ptr2+i)); //calculating thr product of 2 matrices using their pointers
    }
}
void display(int *ptr,int size) // displays the product of two matrices
{
    printf("the product of two matrices is :\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",*(ptr+i));
    }

}