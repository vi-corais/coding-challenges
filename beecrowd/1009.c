#include <stdio.h>

int main()
{
    char  worker_name[50];
    double base_salary;
    double sells;

    scanf("%s", &worker_name);
    scanf("%lf", &base_salary);
    scanf("%lf", &sells);
    
    double salary = base_salary + (sells * 0.15);

    printf("TOTAL = R$ %.2lf\n", salary);

    return 0;
}
