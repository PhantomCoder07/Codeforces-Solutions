#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        char s[n];
        scanf("%s",s);
        int l=strlen(s);
        int start=0,end=l-1;
        while (start<end && ((s[start]=='0' && s[end]=='1') || (s[start]=='1' && s[end]=='0')))
        {
            start++;
            end--;
        }
        printf("%d\n",end-start+1);
    }
    return 0;
}
