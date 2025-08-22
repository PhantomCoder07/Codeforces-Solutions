#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n,sum=0;
        int c[26]={0};
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        for (int i=0; i<n; i++)
        {
            if (c[s[i]-'A']==0)
            {
                sum+=2;
                c[s[i]-'A']=1;
            }
            else
            {
                sum+=1;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
