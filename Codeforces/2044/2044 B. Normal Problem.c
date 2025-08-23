#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char a[101];
        scanf("%s",a);
        strrev(a);
        int l=strlen(a);
        for (int i=0; i<l; i++)
        {
            if (a[i]=='p')
                a[i]='q';
            else if (a[i]=='q')
                a[i]='p';
        }
        printf("%s\n",a);
    }
    return 0;
}
