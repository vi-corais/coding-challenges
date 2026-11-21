#include <stdio.h>

int main()
{
    int A_product_id;
    int B_product_id;

    int A_product_quantity;
    int B_product_quantity;

    float A_product_price;
    float B_product_price;

    scanf("%d %d %f", &A_product_id, &A_product_quantity, &A_product_price);
    scanf("%d %d %f", &B_product_id, &B_product_quantity, &B_product_price);

    float A_price     = A_product_quantity * A_product_price;
    float B_price     = B_product_quantity * B_product_price;
    float total_price = A_price + B_price;
    
    printf("VALOR A PAGAR: R$ %.2f\n", total_price);
    
    return 0;
}
