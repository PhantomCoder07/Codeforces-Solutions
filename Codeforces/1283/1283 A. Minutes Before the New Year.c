#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0; i<t; i++)
    {
        int h,m,ans;
        scanf("%d %d",&h,&m);
        int rh=23-h;
        int rm=60-m;
        if (rh==0)
        {
            ans=rh+rm;
            printf("%d\n",ans);
        }
        else
        {
            ans=(rh*60)+rm;
            printf("%d\n",ans);
        }
    }
    return 0;
}
