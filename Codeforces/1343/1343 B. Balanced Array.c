#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c1=0,c2=0;
        scanf("%d",&n);
        if (n%4!=0)
            printf("NO\n");
        else
        {
            printf("YES\n");
            for (int i=2; i<=n; i+=2)
            {
                printf("%d ",i);
                c1+=i;
            }
            for (int i=1; i<n-1; i+=2)
            {
                printf("%d ",i);
                c2+=i;
            }
            printf("%d\n",c1-c2);
        }
    }
    return 0;
}
