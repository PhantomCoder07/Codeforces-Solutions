#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        int x,y,z;
        x=b;
        y=c;
        z=c;
        printf("%d %d %d\n",x,y,z);
    }
    return 0;
}
