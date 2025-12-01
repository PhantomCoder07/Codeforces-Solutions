#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int s;
        scanf("%d",&s);
        int ans=ceil(sqrt(s));
        printf("%d\n",ans);
    }
    return 0;
}
