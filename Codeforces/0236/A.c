#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    char a[26]= {0};
    scanf("%s",s);
    int l=strlen(s);
    int c=0;
    for (int i=0; i<l; i++)
    {
        if (a[s[i]-'a']==0)
        {
            a[s[i]-'a']=1;
            c++;
        }
        else
            continue;
    }
    if (c%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
    return 0;
}
