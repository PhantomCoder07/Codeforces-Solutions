#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int m,a,b,c,sum=0;
        scanf("%d %d %d %d",&m,&a,&b,&c);
        if (m>=a && m>=b)
        {
            if ((m-a)+(m-b)>=c)
                printf("%d\n",a+b+c);
            else
                printf("%d\n",a+b+(m-a)+(m-b));
        }
        else
        {
            if (a>=m)
                sum+=m;
            else
                sum+=a;
            if (b>=m)
                sum+=m;
            else
                sum+=b;
            if ((2*m-sum)>=c)
                printf("%d\n",sum+c);
            else
                printf("%d\n",sum+(2*m-sum));
        }
    }
    return 0;
}
