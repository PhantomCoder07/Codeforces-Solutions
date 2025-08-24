#include <stdio.h>
#include <string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
    {
        char s[105];
        scanf("%s",s);
        int l=strlen(s);
        int start=0,end=0,c=0;
        for (int i=0; i<l; i++)
        {
            if (s[i]=='1')
            {
                start=i;
                break;
            }
        }
        for (int i=l; i>=start; i--)
        {
            if (s[i]=='1')
            {
                end=i;
                break;
            }
        }
        for (int i=start; i<end; i++)
        {
            if (s[i]=='0')
                c++;
        }
        printf("%d\n",c);
    }
	return 0;
}
