#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x,y,n;
        scanf("%d %d %d",&x,&y,&n);
        int k=n-(n-y)%x;
        if (k>n)
            k-=x;
        printf("%d\n",k);
    }
    return 0;
}
