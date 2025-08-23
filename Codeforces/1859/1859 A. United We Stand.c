#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,max=0,j=0,k=0;
        scanf("%d",&n);
        int a[n],c[n],b[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (a[i]>max)
                max=a[i];
        }
        for (int i=0; i<n; i++)
        {
            if (a[i]==max)
            {
                c[j++]=a[i];
            }
            else
            {
                b[k++]=a[i];
            }
        }
        if (k==0 || j==0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d %d\n",k,j);
            for (int i=0; i<k; i++)
            {
                printf("%d ",b[i]);
            }
            printf("\n");
            for (int i=0; i<j; i++)
            {
                printf("%d ",c[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
