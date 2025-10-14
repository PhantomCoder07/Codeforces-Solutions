#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m=-1,c=0;
        scanf("%d",&n);
        while (m>0)
        {
            c++;
            m/=10;
        }
        if (n%2==0)
            printf("0\n");
        else
        {
            while (n>0)
            {
                c++;
                int d=n%10;
                if (d%2==0)
                    m=c;
                n/=10;
            }
            if (m==-1)
                printf("%d\n",m);
            else if (c==m)
                printf("1\n");
            else
                printf("2\n");
        }
    }
    return 0;
}
