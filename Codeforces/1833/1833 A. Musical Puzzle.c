#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,c=0;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);
        int a[7][7]={0};
        for (int i=0; i<n-1; i++)
        {
            if (a[s[i]-'a'][s[i+1]-'a']!=1)
            {
                a[s[i]-'a'][s[i+1]-'a']=1;
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
