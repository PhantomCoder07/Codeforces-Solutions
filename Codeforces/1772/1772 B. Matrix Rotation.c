#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if (a>b && c>d && d>b && c>a)
            printf("YES\n");
        else if (a<b && a<c && c<d && b<d)
            printf("YES\n");
        else if (c<d && c<a && a<b && d<b)
            printf("YES\n");
        else if (d<b && d<c && c<a && b<a)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
