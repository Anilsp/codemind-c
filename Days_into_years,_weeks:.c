#include <stdio.h>
int main()
{
    int ndays, year, week;
    scanf("%d", &ndays);
    year = ndays / 365;
    week =(ndays % 365) / 7;
    printf("%d
%d", year, week);
}