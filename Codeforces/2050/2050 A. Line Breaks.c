#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int sum=0,c=0;
        char s[15];
        for (int i=0; i<n; i++)
        {
            scanf("%s",s);
            int l=strlen(s);
            if (sum+l<=m)
            {
                sum+=l;
                c++;
            }
            else
            {
                for (int j=i+1; j<n; j++)
                {
                    scanf("%s",s);
                }
                break;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
