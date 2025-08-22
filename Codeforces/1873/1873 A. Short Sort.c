#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        char s[4];
        scanf("%3s",&s);
        if (s[0]=='a' || s[1]=='b' || s[2]=='c')
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
