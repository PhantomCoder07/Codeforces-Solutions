#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,f=0;
        scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (i>0 && a[i-1]>a[i])
                f=1;
        }
        if (f==1)
            printf("0\n");
        else
        {
            int max=a[1]-a[0];
            for (int i=0; i<n-1; i++)
            {
                if (a[i+1]-a[i]<max)
                    max=a[i+1]-a[i];
            }
            printf("%d\n",(max/2)+1);
        }
    }
    return 0;
}
