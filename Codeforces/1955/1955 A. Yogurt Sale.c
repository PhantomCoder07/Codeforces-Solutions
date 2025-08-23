#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,a,b,ans=0;
        scanf("%d %d %d",&n,&a,&b);
        if (2*a>b)
        {
            if (n%2==0)
            {
                ans=(n/2)*b;
            }
            else
            {
                ans=((n-1)/2*b)+a;
            }
        }
        else
        {
            ans=n*a;
        }
        printf("%d\n",ans);
    }
    return 0;
}
