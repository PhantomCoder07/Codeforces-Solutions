#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        char a[n][5];
        for (int i=0; i<n; i++)
        {
            scanf("%s",&a[i]);
        }
        for (int i=n-1; i>=0; i--)
        {
            for (int j=0; j<4; j++)
            {
                if (a[i][j]=='#')
                    printf("%d ",j+1);
            }
        }
        printf("\n");
    }
    return 0;
}
