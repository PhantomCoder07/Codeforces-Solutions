#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[7];
        scanf("%s",s);
        int r,g,b,R,G,B;
        for (int i=0; i<6; i++)
        {
            if (s[i]=='r')
                r=i+1;
            if (s[i]=='g')
                g=i+1;
            if (s[i]=='b')
                b=i+1;
            if (s[i]=='R')
                R=i+1;
            if (s[i]=='G')
                G=i+1;
            if (s[i]=='B')
                B=i+1;
        }
        if (R-r<0 || G-g<0 || B-b<0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
