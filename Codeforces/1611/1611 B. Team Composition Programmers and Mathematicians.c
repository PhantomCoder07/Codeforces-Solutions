#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int x=(a+b)/4;
        int y=(a<b)?a:b;
        int z=(x<y)?x:y;
        printf("%d\n",z);
    }
    return 0;
}
