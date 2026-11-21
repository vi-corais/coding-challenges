#include <stdio.h>
#include <math.h>
 
int main() {
 
    float A;
    float B;
    float C;
    
    scanf("%f %f %f", &A, &B, &C);
    
    double            PI = 3.14159;
    float  triangle_area = (A * C) / 2;
    float  circle_radius = (C*C) * PI;
    float trapezium_area = ((A + B) * C) / 2;
    float    square_area = B * B;
    float rectangle_area = A * B;
 
    printf("TRIANGULO: %.3f\n", triangle_area);
    printf("CIRCULO: %.3f\n", circle_radius);
    printf("TRAPEZIO: %.3f\n", trapezium_area);
    printf("QUADRADO: %.3f\n", square_area);
    printf("RETANGULO: %.3f\n", rectangle_area);
 
    return 0;
}
