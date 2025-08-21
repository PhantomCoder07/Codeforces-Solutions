#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i=0; i<t; i++)
    {
        double n;
        scanf("%lf",&n);
        long long int ans=ceil((n/2)-1);
        printf("%lld\n",ans);
    }
    return 0;
}
