#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int l,r,x,y;
        scanf("%d %d",&l,&r);
        if (l*2<=r)
        {
            x=l;
            y=l*2;
        }
        else
        {
            x=-1;
            y=-1;
        }
        printf("%d %d\n",x,y);
    }
    return 0;
}
