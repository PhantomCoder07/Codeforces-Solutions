#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
        if (n*m-1==k)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
