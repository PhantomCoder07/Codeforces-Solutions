#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c=0;
        scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int str=0,end=n-1;
        for (int i=0; i<n; i++)
        {
            if (a[i]==1)
            {
                str=i;
                break;
            }
        }
        for (int i=n-1; i>=0; i--)
        {
            if (a[i]==1)
            {
                end=i;
                break;
            }
        }
        for (int i=str; i<=end; i++)
        {
            if (a[i]==0)
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
