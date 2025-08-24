#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char a[31]="314159265358979323846264338327";
    while (t--)
    {
        char n[31];
        scanf("%s",n);
        int l=strlen(n);
        int c=0;
        for (int i=0; i<l; i++)
        {
            if (n[i]==a[i])
                c++;
            else
                break;
        }
        printf("%d\n",c);
    }
    return 0;
}
