#include <stdio.h>
#include <math.h>
 
int main() {
    float value;
    
    scanf("%f", &value);
    int cents = round(value * 100);

    // Money

    int nota_100  = cents /  10000;
    cents  = cents %  10000;

    int nota_50  = cents /  5000;
    cents  = cents %  5000;

    int nota_20  = cents /  2000;
    cents  = cents %  2000;

    int nota_10  = cents /  1000;
    cents  = cents %  1000;

    int nota_5  = cents /  500;
    cents  = cents %  500;

    int nota_2  = cents /  200;
    cents  = cents %  200;

    int moeda_1  = cents /  100;
    cents  = cents %  100;

    int moeda_050  = cents /  50;
    cents  = cents %  50;

    int moeda_025  = cents /  25;
    cents  = cents %  25;

    int moeda_010  = cents /  10;
    cents  = cents %  10;

    int moeda_005  = cents /  5;
    cents  = cents %  5;

    int moeda_001  = cents /  1;
    cents  = cents %  1;
    
    // Outputs
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota_100);
    printf("%d nota(s) de R$ 50.00\n",  nota_50);
    printf("%d nota(s) de R$ 20.00\n",  nota_20);
    printf("%d nota(s) de R$ 10.00\n",  nota_10);
    printf("%d nota(s) de R$ 5.00\n",   nota_5);
    printf("%d nota(s) de R$ 2.00\n",   nota_2);
    
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda_1);
    printf("%d moeda(s) de R$ 0.50\n", moeda_050);
    printf("%d moeda(s) de R$ 0.25\n", moeda_025);
    printf("%d moeda(s) de R$ 0.10\n", moeda_010);
    printf("%d moeda(s) de R$ 0.05\n", moeda_005);
    printf("%d moeda(s) de R$ 0.01\n", moeda_001);
    
    return 0;
}
