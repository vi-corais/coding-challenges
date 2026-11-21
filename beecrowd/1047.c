#include <stdio.h>
#include <math.h>

int main() {
    int initial_hour;
    int initial_minutes;
    int final_hour;
    int final_minutes;

    scanf("%d %d %d %d", &initial_hour, &initial_minutes, &final_hour, &final_minutes);
    
    int initial_total_minutes = (initial_hour * 60) + initial_minutes;
    int final_total_minutes   = (final_hour   * 60) + final_minutes;

    int passed_minutes;

    if (final_total_minutes > initial_total_minutes) {
        passed_minutes = final_total_minutes - initial_total_minutes;
    } else if (final_total_minutes < initial_total_minutes) {
        passed_minutes = 1440 - (initial_total_minutes - final_total_minutes);
    } else {
        passed_minutes = 1440;
    }

    int hours   = trunc(passed_minutes/60);
    int minutes = passed_minutes - (hours*60);

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);

    return 0;
}
