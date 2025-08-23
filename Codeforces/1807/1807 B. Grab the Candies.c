#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m=0,b=0;
        scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (a[i]%2==0)
                m+=a[i];
            else
                b+=a[i];
        }
        if (m<=b)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
