#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,j=0;
        scanf("%d",&n);
        int a[10];
        for (int i=9; ; i--)
        {
            n-=i;
            a[j++]=i;
            if (n<0)
            {
                j--;
                n+=i;
                continue;
            }
            else if (n==0)
                break;
        }
        for (int i=j-1; i>=0; i--)
        {
            printf("%d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
