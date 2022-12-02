#include <stdio.h>
#include <math.h>
int main()
{
    float p,r,t;
    scanf("%f%f%f", &p,&r,&t);
    float x=1+r/100;
    float A=p*pow(x,t);
    //CI=Amount-Princple
    printf("%.2f",(A-p));
}