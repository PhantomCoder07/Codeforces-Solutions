#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c=0;
        scanf("%d",&n);
        int p[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&p[i]);
            if (p[i]==i+1)
                c++;
        }
        printf("%d\n",(c+1)/2);
    }
    return 0;
}
