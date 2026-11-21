#include <stdio.h>
 
int main() {
 
    int total_seconds;
    scanf("%d", &total_seconds);
    
    int hours     = total_seconds / 3600;
    total_seconds = total_seconds % 3600;
    
    int minutes   = total_seconds / 60;
    total_seconds = total_seconds % 60;
    
    int seconds   = total_seconds;
    
    printf("%d:%d:%d\n", hours, minutes, seconds);
    
    return 0;
}
