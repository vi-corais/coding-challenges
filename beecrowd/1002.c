#include <stdio.h>

int main() {
    
    /* A = PI * R^2 */
    double R;
    double A;
    double PI = 3.14159;

    scanf("%lf", &R);

    double area = PI * (R*R);

    printf("A=%.4lf\n", area);
}
