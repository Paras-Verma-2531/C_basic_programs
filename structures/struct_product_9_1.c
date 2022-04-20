# include <stdio.h>
struct product
{
    char pro_name[100];
    float price_p_unit;
    float number_o_qnt;
    float amount;


};
int main() {
    struct product prod;
    struct product *product_1;
    product_1=&prod;
    printf("enter product name\n");
    scanf("%s",product_1->pro_name);
    printf("enter number of quantities\n");
    scanf("%f",&product_1->number_o_qnt);
    printf("enter the price per unit\n");
    scanf("%f",&product_1->price_p_unit);
    product_1->amount=(product_1->price_p_unit)*(product_1->number_o_qnt);
    printf("the total amount is %f\n",product_1->amount);
    
 return 0 ;
}