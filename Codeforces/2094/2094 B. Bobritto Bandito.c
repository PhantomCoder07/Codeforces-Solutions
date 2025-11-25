#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m,l,r;
        scanf("%d %d %d %d",&n,&m,&l,&r);
        if (m<=-l)
            printf("%d %d\n",-m,0);
        else
            printf("%d %d\n",l,m+l);
    }
    return 0;
}
