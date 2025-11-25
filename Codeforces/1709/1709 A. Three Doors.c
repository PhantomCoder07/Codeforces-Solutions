#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x,c=0;
        scanf("%d",&x);
        int a[3];
        scanf("%d %d %d",&a[0],&a[1],&a[2]);
        while (x!=0)
        {
            x=a[x-1];
            c++;
        }
        if (c==3)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
