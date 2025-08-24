#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],b;
        char s[101];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i=0; i<n; i++)
        {
            scanf("%d %s",&b,s);
            for (int j=0; j<b; j++)
            {
                if (s[j]=='D')
                    a[i]=(a[i]+1)%10;
                if (s[j]=='U')
                    a[i]=(a[i]-1+10)%10;
            }
        }
        for (int i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
