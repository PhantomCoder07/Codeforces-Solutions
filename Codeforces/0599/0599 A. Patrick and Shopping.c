#include <stdio.h>
int min (int a, int b)
{
    if (a>b)
        return b;
    else
        return a;
}
int main()
{
    int d1,d2,d3;
    scanf("%d %d %d",&d1,&d2,&d3);
    printf("%d\n",min(d1+d2+d3,min(2*(d1+d2),min(2*(d1+d3),2*(d2+d3)))));
    return 0;
}
