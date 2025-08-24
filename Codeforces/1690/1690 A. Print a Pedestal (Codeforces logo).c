#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int ans=n/3;
        if (n%3==1)
            printf("%d %d %d\n",ans,ans+2,ans-1);
        else if (n%3==2)
            printf("%d %d %d\n",ans+1,ans+2,ans-1);
        else
            printf("%d %d %d\n",ans,ans+1,ans-1);
    }
    return 0;
}
