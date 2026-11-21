#include <stdio.h>

int main() {
 
    int A;
    int B;
    int C;
    int D;

    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    int rule_1 = (B > C);
    int rule_2 = (D > A);
    int rule_3 = ((C + D) > (A + B));
    int rule_4 = ((C > 0) && (D > 0));
    int rule_5 = (A % 2 == 0);

    if (rule_1 && rule_2 && rule_3 && rule_4 && rule_5) {
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }
 
    return 0;
}
