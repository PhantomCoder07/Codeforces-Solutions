#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[11];
        scanf("%s",s);
        int l=strlen(s),c=0;
        for(int i=1; i<l; i++)
        {
            if(s[0]!=s[i])
            {
                char temp=s[0];
                s[0]=s[i];
                s[i]=temp;
                c++;
                break;
            }
        }
        if(c==0)
            printf("NO\n");
        else
        {
            printf("YES\n");
            printf("%s\n",s);
        }
    }
    return 0;
}
