# include <stdio.h>
void sort(int arr[],int n);
int main() {
    int size;
    printf("enter size of array\n");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i <size; i++)
    {
        printf("enter %d element \n",(i+1));
       scanf("%d\n",&arr[i]);
    }
    sort(arr,size);
    
 return 0 ;
}
void sort(int arr[],int n)
{ int temp=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("the sorted array is :\n");
    for (int i = 0; i <n; i++)
    {
        printf("%d\n",arr[i]);
    }
    
}