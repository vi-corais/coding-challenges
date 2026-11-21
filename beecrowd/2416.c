#include <stdio.h>
#include <math.h>
 
int main() {
 
    int C;
    int N;
    int rest;
    
    scanf("%d %d", &C, &N);
    
    rest = round(C % N);
    
    printf("%d\n", rest);
 
    return 0;
}
