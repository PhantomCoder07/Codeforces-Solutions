#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char a[51],b[51];
        scanf("%s %s",a,b);
        int lenA=strlen(a);
        int lenB=strlen(b);
        char lastA=a[lenA-1];
        char lastB=b[lenB-1];

        if (lastA==lastB)
        {
            if (lastA=='S')
            {
                if (lenA>lenB)
                    printf("<\n");
                else if (lenA<lenB)
                    printf(">\n");
                else
                    printf("=\n");
            }
            else if (lastA=='L')
            {
                if (lenA>lenB)
                    printf(">\n");
                else if (lenA<lenB)
                    printf("<\n");
                else
                    printf("=\n");
            }
            else
            {
                printf("=\n");
            }
        }
        else
        {
            if (lastA=='S')
                printf("<\n");
            else if (lastA=='M' && lastB=='L')
                printf("<\n");
            else
                printf(">\n");
        }
    }
    return 0;
}
