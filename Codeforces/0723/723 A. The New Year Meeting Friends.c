#include <stdio.h>
int main()
{
    int x1,x2,x3,sum;
    scanf("%d %d %d",&x1,&x2,&x3);
    if (x1>x2 && x2>x3)
        sum=(x1-x2)+(x2-x3);
    else if (x1<x2 && x2<x3)
        sum=(x2-x1)+(x3-x2);
    else if (x2>x1 && x1>x3)
        sum=(x2-x1)+(x1-x3);
    else if (x2<x1 && x1<x3)
        sum=(x1-x2)+(x3-x1);
    else if (x1>x3 && x3>x2)
        sum=(x1-x3)+(x3-x2);
    else if (x1<x3 && x3<x2)
        sum=(x3-x1)+(x2-x3);
    printf("%d",sum);
    return 0;
}
