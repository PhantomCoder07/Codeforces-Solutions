/*#include <stdio.h>
int digit (int n)
{
    int sum;
    while (n>0)
    {
        int d=n%10;
        sum=sum*10+d;
        n/=10;
    }
    return sum;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        if (digit(n+1)<digit(n))
        {
            int ans=(n+1)/10;
            printf("%d\n",ans);
        }
        else
            printf("0\n");
    }
    return 0;
}*/
#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",(n+1)/10);
    }
    return 0;
}
