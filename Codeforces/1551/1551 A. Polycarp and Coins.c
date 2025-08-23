#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,d;
        scanf("%d",&n);
        if (n%3==0)
        {
            d=n/3;
            printf("%d %d\n",d,d);
        }
        else if (n%3==1)
        {
            d=n/3;
            printf("%d %d\n",d+1,d);
        }
        else
            printf("%d %d\n",n/3,(n/3)+1);
    }
    return 0;
}
