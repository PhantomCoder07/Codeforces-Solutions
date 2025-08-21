#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s[5][5],row,col,i,j;
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            scanf("%d",&s[i][j]);
            if (s[i][j]==1)
            {
                row=i;
                col=j;
            }
        }
    }
    printf("%d\n",abs(row-2)+abs(col-2));
    return 0;
}
