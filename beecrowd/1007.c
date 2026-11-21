#include <stdio.h>

int main() {
    int A;
    int B;
    int C;
    int D;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    int product_difference = (A * B) - (C * D);

    printf("DIFERENCA = %d\n", product_difference);
    
    return 0;
}
