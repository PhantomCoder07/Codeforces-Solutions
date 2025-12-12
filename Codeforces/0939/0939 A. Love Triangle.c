#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for (int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0;
    for (int i=1; i<=n; i++)
    {
        if (a[a[a[i]]]==i)
        {
            c=1;
            break;
        }
    }
    if (c==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
