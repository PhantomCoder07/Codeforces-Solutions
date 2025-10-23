#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c=0;
        scanf("%d",&n);
        int a[n+1],b[200005]={};
        for (int i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i=n; i>0; i--)
        {
            if (b[a[i]]==0)
                b[a[i]]=1;
            else
            {
                c=i;
                break;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
