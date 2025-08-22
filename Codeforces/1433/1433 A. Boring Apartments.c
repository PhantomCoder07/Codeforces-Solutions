#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char x[100];
        scanf("%s",x);
        int l=strlen(x);
        int r=((x[0]-48)-1)*10;
        if (l==1)
            r+=1;
        else if (l==2)
            r+=3;
        else if (l==3)
            r+=6;
        else
            r+=10;
        printf("%d\n",r);
    }
}
