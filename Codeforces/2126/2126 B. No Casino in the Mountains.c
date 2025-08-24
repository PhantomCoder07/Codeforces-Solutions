#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n];
        int b=0,c=0;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i=0; i<n; i++)
        {
            if (a[i]==0)
                c++;
            else
                c=0;
            if (c==k)
            {
                b++;
                c=0;
                i++;
            }
        }
        printf("%d\n",b);
    }
    return 0;
}
