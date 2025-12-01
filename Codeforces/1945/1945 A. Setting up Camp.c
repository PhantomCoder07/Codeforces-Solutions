#include <stdio.h>
#define ll long long int
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if ((b+c)%3>c)
            printf("-1\n");
        else
            printf("%d\n",a+(b+c+2)/3);
    }
    return 0;
}
