#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char a,b;
        scanf(" %c%c",&a,&b);
        int ans=(a-'a')*25+(b-'a')+(a>b);
        printf("%d\n",ans);
    }
    return 0;
}
