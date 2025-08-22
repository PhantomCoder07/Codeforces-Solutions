#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int k,c1=0,c2=0;
        scanf("%d",&k);
        while (c1!=k)
        {
            c2++;
            if (c2%3!=0 && c2%10!=3)
                c1++;
        }
        printf("%d\n",c2);
    }
    return 0;
}
