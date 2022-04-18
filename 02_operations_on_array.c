#include <stdio.h>
int insert(int num, int index);
void input();
int delete (int index);
void display();
int array[30], size;
int main()
{
    int choice, res, number, index;
    input();
    printf("enter '1' to perform insertion on array or '2' to perform deletion or '3' to display the array: \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("enter the number and index\n");
        scanf("%d", &number);
        scanf("%d", &index);
        res = insert(number, index);
        ((res == 1) ? display() : printf("insertion not possible\n"));
        break;
    case 2: // deletion case
        printf("enter the index\n");
        scanf("%d", &index);
        res = delete (index);
        ((res == 1) ? display() : printf("deletion not possible\n"));
        break;
    case 3: // display
        display();
        break;
    default: // invalid case
        printf("invalid choice!!\n");
    }
    return 0;
}
int insert(int num, int index)
{
    if((size==30)||(index>size)){ return -1;} // returns -1 if array is full or index is wrong
    
    else{
        for (int i = size - 1; i >= index; i--)
        {
            array[i+1] = array[i]; // shifting element from(left to righ) transfering element of i to i+1
        }
        array[index] = num;
        size++;
        return 1;
    }
}
void display()
{
    printf("******\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]); // displays the array
    }
}
void input()
{
    printf("enter the size of array (1-30)\n");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("entert the %d element : ", (i + 1));
        scanf("%d", &array[i]);
    }
}
int delete (int index) // function definition
{
    if (index > size || size == 0){return -1;} // returns -1 if array is empty or index is invalid
    else{
       for (int i = index; i < size - 1; i++)
        {
            array[i] = array[i+1]; // transfering the element of i+1 position to i (right to left shifting)
        }
        size--; // updating the new size as size=size - 1
        return 1;
    }
}