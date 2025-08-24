#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        if (n%7==0)
            printf("%d\n",n);
        else
        {
            for (int i=0; ; i++)
            {
                int m=((n/10)*10)+i;
                if (m%7==0)
                {
                    printf("%d\n",m);
                    break;
                }
            }
        }
    }
    return 0;
}
