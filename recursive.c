#include <stdio.h>
int f (int n)
{
    if (n<=0)
        return n;
    else
        return (f(n-1)+2);
}
int main (void)
{
    int a;
    printf("number that you want to sum\n");
    scanf("%d", &a);
    printf("result=%d", f(a));
    printf("\n");
    return 0;
}