#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x;
        int min=1005;
        scanf("%d",&x);
        while (x!=0)
        {
            int d=x%10;
            if (d<min)
                min=d;
            x/=10;
        }
        printf("%d\n",min);
    }
    return 0;
}
