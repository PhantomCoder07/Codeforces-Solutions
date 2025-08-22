#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c=0,max=0;
        scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (a[i]==0)
            {
                c++;
                if (c>max)
                    max=c;
            }
            else
                c=0;
        }
        printf("%d\n",max);
    }
    return 0;
}
