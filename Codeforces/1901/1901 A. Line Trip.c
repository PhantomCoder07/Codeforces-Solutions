#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,x,a;
        scanf("%d %d",&n,&x);
        int b=0,ans=0;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a);
            if (ans<a-b)
                ans=a-b;
            b=a;
        }
        if (ans<2*(x-b))
            ans=2*(x-b);
        printf("%d\n",ans);
    }
    return 0;
}
