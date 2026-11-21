#include <stdio.h>

int main()
{
    int worker_id;
    int worked_hours;
    float money_per_hour;

    scanf("%d", &worker_id);
    scanf("%d", &worked_hours);
    scanf("%f", &money_per_hour);
    
    float salary = worked_hours * money_per_hour;

    printf("NUMBER = %d\n", worker_id);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}
