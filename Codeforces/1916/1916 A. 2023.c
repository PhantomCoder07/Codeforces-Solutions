#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int b[n];
        long long int multi=1;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&b[i]);
            multi*=b[i];
        }
        if (2023%multi==0)
        {
            printf("YES\n%lld ",2023/multi);
            for (int i=0; i<k-1; i++)
            {
                printf("1 ");
            }
            printf("\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
