# include <stdio.h> 
typedef struct Product
{
    char product_Name[20];int price_unit;int number_qnty;int amt;// structure creted with product name
    // price per unit ,number of quantities and amount as it's members.
}Product;
void inputDetails(Product *p1);
void calculate(Product *p1);
void display(Product *P1);
int main() {
    Product product;
    Product *product1=&product;
   inputDetails(product1);
   calculate(product1);
   display(product1);
    return 0 ;
}
void inputDetails(Product *p1) // input the details frm user
{
    printf("enter the product name: ");
    scanf("%s",p1->product_Name);
    printf("enter the price per unit: ");
    scanf("%d",&p1->price_unit);
    printf("enter the number of quantities purchased: ");
    scanf("%d",&p1->number_qnty);
}
void calculate(Product *p1)
{// calculate the amount using number of quantities purchased and price per unit (accessed through pointers).
    p1->amt=(p1->number_qnty)*(p1->price_unit);
}
void display(Product *p1)
{
    printf("       *********       \n");// display the details
    printf("the name of product is: %s\n",p1->product_Name);
    printf("the price per unit of product is: %d\n",p1->price_unit);
    printf("the number of quantities  purchased is: %d\n",p1->number_qnty);
    printf("the total amount  is: %d\n",p1->amt); 
}