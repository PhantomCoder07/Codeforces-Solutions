#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m,k,H;
        scanf("%d %d %d %d",&n,&m,&k,&H);
        int h[n],c=0;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&h[i]);
            int x=fabs(h[i]-H);
            if (x<=(m-1)*k && x%k==0 && x!=0)
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
