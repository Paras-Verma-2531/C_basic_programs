# include <stdio.h> 
int sumOfArray(int *ptr,int size);
void inputElement(int *ptr,int size);// function prototype
int main() {
    int size;
    printf("enter the size of array\n");
    scanf("%d",&size);
    int arr[size]; int *ptr=arr;
    inputElement(ptr,size);
    int sum=sumOfArray(ptr,size); // function call
    printf(" the sum of array is : %d\n",sum);
    
    return 0 ;
}
void inputElement(int *ptr,int size)
{
 for(int i=0;i<size;i++)
    {
        printf("enter the %d element : ",(i+1));
        scanf("%d",(ptr+i));
    }
}
int sumOfArray(int *ptr,int size) // function definition
{
  if(size==0) return 0;
    else{
        return *(ptr+size-1)+sumOfArray(ptr,size-1); // recursive call until the size becomes zero
        // sum through pointers
    }
}