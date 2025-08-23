#include <stdio.h>
#include <string.h>
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    char s[2];
    long long int d[n],sum=x,c=0;
    for (int i=0; i<n; i++)
    {
        scanf("%s",s);
        scanf("%lld",&d[i]);
        if (s[0]=='+')
        {
            sum+=d[i];
        }
        else if (s[0]=='-' && sum>=d[i])
        {
            sum-=d[i];
        }
        else if (s[0]=='-')
            c++;
    }
    printf("%lld %lld",sum,c);
    return 0;
}
