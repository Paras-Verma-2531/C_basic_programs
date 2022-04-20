# include <stdio.h>
union product 
{
    char product_Name[30];
    int quantity;
    int pricePerUnit;
    int amount;
};
void display(union product **p2)
{
    printf("the name of product is %s\n",p2-> product_Name);
    printf("the price per unit  %s\n",p2-> pricePerUnit);
    printf("the number of quantities  %s\n",p2-> quantity);
    printf("the total amount  is %s\n",p2-> amount);
}
int main() {
    union product p1;
    union product *p2; 
    p2=&p1; // doing this becoz pointer will have only memory of 2 bytes.
    printf("enter the product name\n");
    scanf("%s",p2->product_Name);
    printf("enter number of quantities purchased\n");
    scanf("%d",&p2->quantity);
    printf("enter price per unit\n");
    scanf("%d",&p2->pricePerUnit);
    p2->amount=p2->pricePerUnit*p2->quantity;
    display(&p2);
    
 return 0 ;
}