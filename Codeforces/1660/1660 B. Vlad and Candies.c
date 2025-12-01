#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int max1=0,max2=0;
        for (int i=0; i<n; i++)
        {
            if (a[i]>max1)
            {
                max2=max1;
                max1=a[i];
            }
            else if (a[i]>max2)
                max2=a[i];
        }
        if ((max1-max2)<2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
