#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,even=0,odd=0;
        scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if (a[i]%2==(i+1)%2)
            {
                if (a[i]%2==0)
                    even++;
                else
                    odd++;
            }
        }
        if (even==odd)
            printf("%d\n",even);
        else
            printf("-1\n");
    }
    return 0;
}
