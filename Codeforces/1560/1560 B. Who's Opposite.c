#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a,b,c,ans;
        scanf("%d %d %d",&a,&b,&c);
        int d=abs(a-b);
        if (a>d*2 || b>d*2 || c>d*2)
            printf("-1\n");
        else
        {
            ans=c+d;
            if (ans>d*2)
                ans=c-d;
            printf("%d\n",ans);
        }
    }
    return 0;
}
