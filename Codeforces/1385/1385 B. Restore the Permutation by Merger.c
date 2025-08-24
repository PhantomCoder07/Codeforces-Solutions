#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k=0;
        scanf("%d",&n);
        int a[202],s[51]={};
        for (int i=0; i<2*n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i=0; i<2*n; i++)
        {
            if (s[a[i]]!=1)
            {
                s[a[i]]=1;
                printf("%d ",a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
