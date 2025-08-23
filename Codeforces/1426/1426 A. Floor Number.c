#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,x,c=1;
        scanf("%d %d",&n,&x);
        if (n==1 || n==2)
            printf("1\n");
        else
        {
            for (int i=3; i<=n; i+=x)
            {
                c++;
            }
            printf("%d\n",c);
        }

    }
    return 0;
}
