#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,x,y;
        scanf("%d %d %d",&a,&x,&y);
        if ((a<x)==(a<y))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
