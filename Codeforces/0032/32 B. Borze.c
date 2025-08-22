#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
    scanf("%200s",&s);
    for (int i=0; i<strlen(s); i++)
    {
        if (s[i]=='.')
        {
            printf("0");
        }
        else if (s[i]=='-')
        {
            if (s[i+1]=='.')
            {
                printf("1");
                i++;
            }
            else if (s[i+1]=='-')
            {
                printf("2");
                i++;
            }
        }
    }
    return 0;
}
