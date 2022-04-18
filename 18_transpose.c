# include <stdio.h> 
void intput(int *ptr,int row,int column);
void display(int *ptr,int row,int column);
void transpose(int *ptr,int row,int column);
int main() {
    int row,column;
    printf("enter the size of row: ");
    scanf("%d",&row);
    printf("enter the size of column: ");
    scanf("%d",&column);
    int arr[row][column];int *ptr=arr;
    intput(ptr,row,column); // input the matrix using the pointers
    printf("the matrix is :\n");
    display(ptr,row,column);
    printf("the transpose matrix is :\n");
    transpose(ptr,row,column); // printd the transpose of matrix
    return 0 ;
}
void intput(int *ptr,int row,int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("enter the %d row %d element : ",(i+1),(j+1));
            scanf("%d",(ptr+(column*i+j)));
        }
    }
}
void display(int *ptr,int row,int column)
{
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",*(ptr+(column*i+j)));
        }
       printf("\n");  
    }
}
void transpose(int *ptr,int row,int column) // prints the transpose of matrix
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",*(ptr+(row*j+i))); // column major wise is the transpose of the matrix
        }
        printf("\n");
    }
}
