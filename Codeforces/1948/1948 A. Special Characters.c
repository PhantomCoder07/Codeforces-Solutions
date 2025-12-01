#include <stdio.h>
char s[52]="AABBCCDDEEFFGGHHIIJJKKLLMMNNOOPPQQRRSSTTUUVVWWXXYYZZ";
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        if (n%2==0)
        {
            printf("YES\n");
            for (int i=0; i<n; i++)
            {
                printf("%c",s[i]);
            }
            printf("\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}
