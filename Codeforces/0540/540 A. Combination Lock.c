#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,sum,ans=0;
    scanf("%d",&n);
    char or[n],op[n];
    scanf("%s",or);
    scanf("%s",op);
    for (int i=0; i<n; i++)
    {
        sum=abs(or[i]-op[i]);
        if (sum>5)
        {
            ans+=(10-sum);
        }
        else
            ans+=sum;
    }
    printf("%d\n",ans);
    return 0;
}
