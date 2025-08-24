#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k,x;
        scanf("%d %d %d",&n,&k,&x);
        if (x!=1)
        {
            printf("YES\n%d\n",n);
            for (int i=0; i<n; i++)
            {
                printf("1 ");
            }
            printf("\n");
        }
        else if (k>=2 && n%2==0)
        {
            printf("YES\n%d\n",n/2);
            for (int i=0; i<n/2; i++)
            {
                printf("2 ");
            }
            printf("\n");
        }
        else if (k>=3)
        {
            printf("YES\n%d\n3 ",n/2);
            for (int i=1; i<n/2; i++)
            {
                printf("2 ");
            }
            printf("\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
