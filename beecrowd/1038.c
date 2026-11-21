#include <stdio.h>
 
int main() {
 
    int product_code;
    int quantity;
    float total_value;
    
    float cachorro_quente = 4;
    float x_salada = 4.5;
    float x_bacon = 5;
    float torrada_simples = 2;
    float refrigerante = 1.5;
    
    scanf("%d %d", &product_code, &quantity);
    
    if (product_code == 1) {
        total_value = cachorro_quente * quantity;
    } else if (product_code == 2) {
        total_value = x_salada * quantity;
    } else if (product_code == 3) {
        total_value = x_bacon * quantity;
    } else if (product_code == 4) {
        total_value = torrada_simples * quantity;
    } else if (product_code == 5) {
        total_value = refrigerante * quantity;
    }
    
    printf("Total: R$ %.2f\n", total_value);
    
    return 0;
}
