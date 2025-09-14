#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m,o,c=0;
        scanf("%d %d",&n,&m);
        for (int i=0; i<n; i++)
        {
            scanf("%1d",&o);
            if (m>o && c==0)
            {
                printf("%d",m);
                c=1;
            }
            printf("%d",o);
        }
        if (c==0)
            printf("%d",m);
        printf("\n");
    }
    return 0;
}
