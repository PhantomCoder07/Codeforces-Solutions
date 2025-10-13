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
            c^=a[i];
        }
        if (n%2==0 && c)
            printf("-1\n");
        else
            printf("%d\n",c);
    }
    return 0;
}
