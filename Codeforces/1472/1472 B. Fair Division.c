#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,a;
        scanf("%d",&n);
        int sum=0,one=0;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a);
            if (a==1)
            {
                one++;
                sum+=1;
            }
            else
                sum+=2;
        }
        if (sum%2==0)
        {
            int d=sum/2;
            if (d%2==0)
                printf("YES\n");
            else
            {
                if (one)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
        }
        else
            printf("NO\n");
    }
    return 0;
}
