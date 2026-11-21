#include <stdio.h>
#include <math.h>

int main() {
 
    double PI = 3.14159;
    double radius;
    
    scanf("%lf", &radius);
    
    double sphere_volume = (4.0/3.0) * PI * pow(radius, 3);
    printf("VOLUME = %.3lf\n", sphere_volume);
 
    return 0;
}
