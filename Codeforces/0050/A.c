#include <stdio.h>
int main()
{
    int n,m,count=0;
    scanf("%d %d",&m,&n);
    int s[m][n];
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            s[i][j]=1;
        }
    }
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (s[i][j]+s[i][j+1]==2)
            {
                count++;
                s[i][j+1]=2;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
