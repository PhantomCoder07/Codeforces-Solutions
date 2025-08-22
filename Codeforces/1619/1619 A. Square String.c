#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[100];
        scanf("%s",s);
        int l=strlen(s);
        if (l%2!=0)
            printf("NO\n");
        else
        {
            int j=0;
            char a[100],b[100];
            for (int i=0; i<l/2; i++)
            {
                a[i]=s[i];
            }
            a[l/2]='\0';
            for (int i=l/2; i<l; i++)
            {
                b[j++]=s[i];
            }
            b[j]='\0';
            if (strcmp(a,b)==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
}
