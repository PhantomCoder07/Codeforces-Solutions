#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x,y,z;
        scanf("%d %d",&x,&y);
        z=(y+1)/2;
        x-=(15*z-4*y);
        if (x>0)
            z+=(x+14)/15;
        printf("%d\n",z);
    }
    return 0;
}
