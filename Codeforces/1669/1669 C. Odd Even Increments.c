#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c=1;
        scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int even=a[0]%2;
        int odd=(n>1)?a[1]%2:0;
        for (int i=0; i<n; i++)
        {
            if (i%2==0 && a[i]%2!=even)
            {
                c=0;
                break;
            }
            if (i%2==1 && a[i]%2!=odd)
            {
                c=0;
                break;
            }
        }
        if (c==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
