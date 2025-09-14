#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int b1,b2,b3,b4,b5,b6,b7;
        scanf("%d %d %d %d %d %d %d",&b1,&b2,&b3,&b4,&b5,&b6,&b7);
        if (b1+b2+b3==b7)
            printf("%d %d %d\n",b1,b2,b3);
        else
            printf("%d %d %d\n",b1,b2,b4);
    }
    return 0;
}
