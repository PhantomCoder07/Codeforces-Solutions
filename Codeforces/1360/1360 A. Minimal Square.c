#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,c;
        scanf("%d %d",&a,&b);
        if (a<b)
        {
            c=2*a;
            if (c>b)
                printf("%d\n",c*c);
            else
                printf("%d\n",b*b);
        }
        else
        {
            c=2*b;
            if (c>a)
                printf("%d\n",c*c);
            else
                printf("%d\n",a*a);
        }
    }
    return 0;
}
