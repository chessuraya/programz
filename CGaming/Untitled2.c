#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define p printf
int practice1()
{
    float a=-1;
    while (a<0)
    {
    printf("Please give in a lower limit, limit>=0: ");
    scanf("%f", &a);
    }
    float b=10;
    while ((b<=10)||(b>50000))
           {
               printf("Please give in a higher limit, 10 > limit <=50000: ");
               scanf ("%f", &b);
           }
           int c=(int)b+1;
    while (c>b)
        {
            printf("Please give in a step, 0 < step <= %0.f: ", b);
            scanf("%d", &c);
        }
    p ("\nCelcius Farenheight");
    p ("\n-------------------");
while (a<=b)
{
    printf ("\n%f     %f",a,(a*9/5)+32);
    a=a+c;
}
        return 1;
}
