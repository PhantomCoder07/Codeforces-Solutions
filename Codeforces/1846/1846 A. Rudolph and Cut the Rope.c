#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c=0;
        scanf("%d",&n);
        int a[n],b[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d %d",&a[i],&b[i]);
            if (a[i]>b[i])
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
