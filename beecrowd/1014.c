#include <stdio.h>
 
int main() {
 
    float km;
    float l;
    
    scanf("%f", &km);
    scanf("%f", &l);
    
    float consumption = km / l;
    
    printf("%.3f km/l\n", consumption);
 
    return 0;
}
