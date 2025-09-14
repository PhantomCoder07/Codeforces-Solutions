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
            b[i]=0;
        }
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            b[a[i]-1]++;
        }
        for (int i=0; i<n; i++)
        {
            c+=b[i]/2;
        }
        printf("%d\n",c);
    }
    return 0;
}
