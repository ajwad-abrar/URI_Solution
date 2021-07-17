#include<stdio.h>

int main()
{
    float A, B, MEDIA;

    scanf("%f%f", &A, &B);

    MEDIA = ((3.5*A) + (7.5*B))/ 11;

    if(A >= 0 && A <= 10 && B >= 0 && B <= 10){

        printf("MEDIA = %.5f\n",MEDIA);
    }

    return 0;
}

