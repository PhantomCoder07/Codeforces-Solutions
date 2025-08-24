#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[5];
        scanf("%s",s);
        int year=atoi(s);
        int ans=0;
        for (int i=1; i<4; i++)
        {
            int a=0,b=0;
            for (int j=0; j<i; j++)
                a=a*10+(s[j]-'0');
            for (int j=i; j<4; j++)
                b=b*10+(s[j]-'0');
            int sum=a+b;
            if (sum*sum==year)
            {
                printf("%d %d\n",a,b);
                ans=1;
                break;
            }
        }
        if (ans==0)
            printf("-1\n");
    }
    return 0;
}
