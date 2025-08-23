#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int l=strlen(s);
    int sum=0;
    char prev='a';
    for (int i=0; i<l; i++)
    {
        char curr=s[i];
        int c1=abs(curr-prev);
        int c2=abs(abs(curr-prev)-26);
        if (c1>c2)
            sum+=c2;
        else
            sum+=c1;
        prev=curr;
    }
    printf("%d",sum);
    return 0;
}
