#include <stdio.h>
int main()
{
    int A,B;
    scanf("%d%d", &A,&B);
    int z=21-(A+B);
    if(z<=10)
    {
        printf("%d", z);
    }
    else{
        printf("-1");
    }
}