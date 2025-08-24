#include <stdio.h>
int max (int i, int j)
{
    return (i>j)? i : j;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,c,x,y;
        scanf("%d %d %d %d %d",&a,&b,&c,&x,&y);
        x=max(x-a,0);
        y=max(y-b,0);
        if(x+y<=c)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
