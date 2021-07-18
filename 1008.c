#include<stdio.h>

int main()
{
    int number,hour;

    float salary_per_hour,salary;

    scanf("%d%d%f", &number, &hour, &salary_per_hour);

    printf("NUMBER = %d\n",number);

    salary=hour*salary_per_hour;

    printf("SALARY = U$ %.2f\n",salary);

    return 0;
}

