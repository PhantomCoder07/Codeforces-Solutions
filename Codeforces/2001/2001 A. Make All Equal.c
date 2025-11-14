#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c=0;
        scanf("%d",&n);
        int a,b[105]={};
        int max=105;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&a);
            b[a]++;
            if (n-b[a]<max)
                max=n-b[a];
        }
        printf("%d\n",max);
    }
    return 0;
}
