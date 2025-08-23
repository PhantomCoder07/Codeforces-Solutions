#include <stdio.h>
#include <stdlib.h>
int sum (int a, int b, int c)
{
    int add=abs(a-c)+abs(b-c)+abs(c-c);
    return add;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x1,x2,x3;
        scanf("%d %d %d",&x1,&x2,&x3);
        int sum1=sum(x1,x2,x3);
        int sum2=sum(x2,x3,x1);
        int sum3=sum(x1,x3,x2);
        if (sum1<=sum2 && sum1<=sum3)
            printf("%d\n",sum1);
        else if (sum2<=sum1 && sum2<=sum3)
            printf("%d\n",sum2);
        else if (sum3<=sum1 && sum3<=sum2)
            printf("%d\n",sum3);
    }
    return 0;
}
