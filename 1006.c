#include<stdio.h>

int main()
{
    float A,B,C,MEDIA;

    scanf("%f%f%f", &A, &B, &C);

    MEDIA=((2*A)+(3*B)+(5*C))/10;

    if(A>=0 && A<=10 && B >=0 && B <= 10){

        printf("MEDIA = %.1f\n",MEDIA);
    }

    return 0;
}

