#include <stdio.h>
int main()
{
    int n,hour, min, sec;
    scanf("%d", &n);
    hour = n / 3600;
    min = (n -(3600*hour))/60;
    sec = (n -(3600*hour)-(min*60));
    printf("H:M:S-%d:%d:%d", hour, min, sec);
}