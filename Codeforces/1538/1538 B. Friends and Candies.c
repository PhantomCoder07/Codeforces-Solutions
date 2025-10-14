#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,sum=0,c=0;
        scanf("%d",&n);
        int a[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        if (sum%n==0)
        {
            for(int i=0; i<n; i++)
            {
                if(a[i]>sum/n)
                {
                    c+=1;
                }
            }
            printf("%d\n",c);
        }
        else
            printf("-1\n");
    }
    return 0;
}
