#include <stdio.h>
 
int main() {
 
    int A;
    int B;
    int C;
    int bigger;

    scanf("%d %d %d", &A, &B, &C);

    // 1 1 1
    if (A > B) {
        bigger = A;
    } else {
        bigger = B;
    }

    if (C > bigger) {
        bigger = C;
    }

    printf("%d eh o maior\n", bigger);
    
    return 0;
}
