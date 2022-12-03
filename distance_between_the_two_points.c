#include <stdio.h>
#include <math.h>
int main()
{
    float x1, x2, y1,y2;
    float a, b, c;
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    a=pow((x2-x1),2);
    b=pow((y2-y1),2);
    c= a+b;
    printf("%.4f", sqrt(c));
}