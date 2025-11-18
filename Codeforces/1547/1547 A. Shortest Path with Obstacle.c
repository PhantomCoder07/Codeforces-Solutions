#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x[3],y[3];
        for (int i=0; i<3; i++)
        {
            scanf("%d %d",&x[i],&y[i]);
        }
        int ans=abs(x[0]-x[1])+abs(y[0]-y[1]);
        if ((x[0]==x[1] && x[0]==x[2]) && ((y[0]<y[2] && y[1]>y[2]) || (y[1]<y[2] && y[0]>y[2])))
            ans+=2;
        if ((y[0]==y[1] && y[0]==y[2]) && ((x[0]<x[2] && x[1]>x[2]) || (x[1]<x[2] && x[0]>x[2])))
            ans+=2;
        printf("%d\n",ans);
    }
    return 0;
}
