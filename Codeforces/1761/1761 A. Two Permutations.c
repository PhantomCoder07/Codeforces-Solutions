#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,a,b;
        scanf("%d %d %d",&n,&a,&b);
        if ((n==a && n==b) || n-(a+b)>=2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
