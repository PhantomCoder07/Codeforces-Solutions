#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int b[n];
        for (int i=0; i<n; i++)
        {
            scanf("%d",&b[i]);
        }
        int j=0,k=n-1;
        for (int i=0; i<n; i++)
        {
            if (i%2==0)
            {
                printf("%d ",b[j++]);
            }
            else
            {
                printf("%d ",b[k--]);
            }
        }
        printf("\n");
    }
    return 0;
}
