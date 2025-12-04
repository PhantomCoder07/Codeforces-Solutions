#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if (y>-2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
