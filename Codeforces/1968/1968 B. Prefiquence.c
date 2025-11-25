#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m,j=0;
        scanf("%d %d",&n,&m);
        char a[n+1],b[m+1];
        scanf("%s %s",a,b);
        for (int i=0; i<m; i++)
        {
            if (a[j]==b[i])
                j++;
        }
        printf("%d\n",j);
    }
    return 0;
}
