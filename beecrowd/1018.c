#include <stdio.h>
 
int main() {
    int value;
    
    scanf("%d", &value);
    int initial_value = value;

    int nota_100 = value / 100;
    value        = value % 100;
    
    int nota_50  = value /  50;
    value        = value %  50;

    int nota_20  = value /  20;
    value        = value %  20;

    int nota_10  = value /  10;
    value        = value %  10;

    int nota_5   = value /   5;
    value        = value %   5;

    int nota_2   = value /   2;
    value        = value %   2;

    int nota_1   = value /   1;
    value        = value %   1;

    printf("%d\n", initial_value);
    printf("%d nota(s) de R$ 100,00\n", nota_100);
    printf("%d nota(s) de R$ 50,00\n",  nota_50);
    printf("%d nota(s) de R$ 20,00\n",  nota_20);
    printf("%d nota(s) de R$ 10,00\n",  nota_10);
    printf("%d nota(s) de R$ 5,00\n",   nota_5);
    printf("%d nota(s) de R$ 2,00\n",   nota_2);
    printf("%d nota(s) de R$ 1,00\n",   nota_1);
 
    return 0;
}
