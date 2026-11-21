#include <stdio.h>
#include <math.h>

int main() {
    
    double A;
    double B;
    double C;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    double delta          = (B*B) - (4 * A * C);
    double bhaskara_plus  = ((-B) + sqrt(delta)) / (2 * A);
    double bhaskara_minus = ((-B) - sqrt(delta)) / (2 * A);
    
    if (A == 0 || B == 0 || C == 0 || delta <= 0){
        printf("Impossivel calcular\n");
    } else {
        printf("R1 = %.5lf\n", bhaskara_plus);
        printf("R2 = %.5lf\n", bhaskara_minus);
    }
    
    return 0;
}
