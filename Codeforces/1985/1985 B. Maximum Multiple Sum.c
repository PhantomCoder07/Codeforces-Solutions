#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x;
        scanf("%d",&x);
        int max=0,max_x=0;
        for (int i=2; i<=x; i++)
        {
            int k=x/i;
            int sum=i*(k*(k+1))/2;
            if (sum>max)
            {
                max=sum;
                max_x=i;
            }
        }
        printf("%d\n",max_x);
    }
    return 0;
}
