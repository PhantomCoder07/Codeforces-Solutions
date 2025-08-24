#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c=0;
        scanf("%d",&n);
        for (int i=1; i<=9; i++)
        {
            int temp=i;
            while (temp<=n)
            {
                c++;
                temp*=10;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
