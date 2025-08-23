#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,min=10,k,ans=1;
        scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (a[i]<min)
            {
                min=a[i];
                k=i;
            }
        }
        a[k]+=1;
        for (int i=0; i<n; i++)
        {
            ans*=a[i];
        }
        printf("%d\n",ans);
    }
    return 0;
}
