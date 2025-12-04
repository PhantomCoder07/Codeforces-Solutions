#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int r[n];
        int c1=0,c3=0;
        for (int i=0; i<n; i++)
        {
            scanf("%d",&r[i]);
            if (r[i]==1)
                c1++;
            if (r[i]==3)
                c3++;
        }
        printf("%d\n",c1+c3);
    }
    return 0;
}
