#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,ca=0,cb=0;
        scanf("%d",&n);
        char s[5];
        scanf("%s",s);
        for (int i=0; i<5; i++)
        {
            if (s[i]=='A')
                ca++;
            else
                cb++;
        }
        if (ca>cb)
            printf("A\n");
        else
            printf("B\n");
    }
    return 0;
}
