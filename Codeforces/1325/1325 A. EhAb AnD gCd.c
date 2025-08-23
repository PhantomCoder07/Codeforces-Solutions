#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x;
        scanf("%d",&x);
        int a=0,b=0;
        if (x%2==0)
        {
            a=x/2;
            b=x/2;
        }
        else
        {
            a=x-1;
            b=1;
        }
        printf("%d %d\n",a,b);
    }
    return 0;
}
