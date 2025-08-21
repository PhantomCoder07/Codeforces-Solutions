#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    char s[n],temp;
    scanf("%s",s);
    while (t--)
    {
        for (int i=0; i<n-1; i++)
        {
            if (s[i]=='B' && s[i+1]!='B')
            {
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                i++;
            }
        }
    }
    printf("%s",s);
    return 0;
}
