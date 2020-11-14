#include <stdio.h>
#include <math.h>

float NR(float x)
{
    float y = x/2; /*y is squareroot of x*/
    float e;    /*error*/
    int i = 0;  /*count the while number*/
    do{
     y = (y+ x/y)/2.0; /*the iterative definition*/
     e = fabsf(y*y - x); /*count the error*/
     i++;
    }while(e >= 1e-4 & i< 20);
    return y;
}

int main()
{
    float i;
    float y;
    printf("Enter a real-valued number:");
    scanf("%f",&i);
    y = NR(i);
    printf("The square-root of %.1f is %.4f:",i,y);

    return 0;
}