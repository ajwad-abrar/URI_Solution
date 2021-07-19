#include<stdio.h>

int main()
{
    char name[10000];

    double fixed_salary,sales,TOTAL;

    scanf("%s%lf%lf", name, &fixed_salary, &sales);

    TOTAL=(fixed_salary)+(.15*sales);

    printf("TOTAL = R$ %.2lf\n",TOTAL);

    return 0;
}
