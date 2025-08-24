#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int d[10]={3,1,2,1,0,1,0,0,0,0};
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int c[10]={0};
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int f=0;
        for (int i=0; i<n; i++)
        {
            c[a[i]]++;
            int ans=0;
            for (int j=0; j<10; j++)
            {
                if (c[j]<d[j])
                {
                    ans=1;
                    break;
                }
            }
            if (ans==0)
            {
                printf("%d\n",i+1);
                f=1;
                break;
            }
        }
        if (f==0)
        {
            printf("0\n");
        }
    }
    return 0;
}
