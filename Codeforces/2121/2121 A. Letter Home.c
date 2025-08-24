#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,s,ans=0;
        scanf("%d %d",&n,&s);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        if (abs(s-a[0])>abs(a[n-1]-s))
            ans=abs(a[n-1]-s);
        else
            ans=abs(s-a[0]);
        printf("%d\n",a[n-1]-a[0]+ans);
    }
    return 0;
}
