#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,c=0;
        scanf("%d %d",&a,&b);
        if (a==b)
            printf("0\n");
        else
        {
            if (a>b)
            {
                c++;
                if ((a-b)%2==1)
                    c++;
            }
            else if (b>a)
            {
                c++;
                if ((b-a)%2==0)
                    c++;
            }
            printf("%d\n",c);
        }
    }
    return 0;
}
