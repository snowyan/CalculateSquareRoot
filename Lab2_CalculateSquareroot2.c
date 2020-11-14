#include <stdio.h>
#include <math.h>

/**
 * NR, Newton-Raphson's method calulate square root
 * x: The input value 
 * y:
 * e: error
 */
void NR(double x, double *y, double *e)
{
    int i = 0; /*count the while number*/
    double y1 = 0.0;
    double e1 = 0.0;
    do
    {
        if (i == 0)
        {
            y1 = x / 2.0;
        }
        else
        {
            y1 = (y1 + x / y1) / 2.0; /*the iterative definition*/
        }
        e1 = fabs(y1 * y1 - x); /*count the error*/
        printf("Lap %d: %.4f %.8f \n", i, y1, e1);
        i++;
    } while (e1 >= 0.0001 & i < 20);
    *y = y1;
    *e = e1;
}

int main()
{
    float x;
    double y, e;
    printf("Enter a real-valued number:");
    scanf("%f", &x);
    NR(x, &y, &e);
    printf("The square-root of %.1f is %.4f:", x, y);
    printf("The error is: %.8f", e);

    return 0;
}