#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int x,y;
        scanf("%d %d",&x,&y);
        if (n==0)
        {
            printf("0\n");
            continue;
        }
        if (x<y)
            printf("%d\n",(n-1)/x+1);
        else
            printf("%d\n",(n-1)/y+1);
    }
    return 0;
}
