#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int w,h,n,ans=1;
        scanf("%d %d %d",&w,&h,&n);
        if (n==1)
        {
            printf("YES\n");
            continue;
        }
        while (w%2==0)
        {
            ans*=2;
            w/=2;
        }
        while (h%2==0)
        {
            ans*=2;
            h/=2;
        }
        if (ans>=n)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
