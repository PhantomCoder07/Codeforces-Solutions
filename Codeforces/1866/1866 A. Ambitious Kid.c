#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N,A;
    scanf("%d",&N);
    int zero=0,min=100001;
    for (int i=0; i<N; i++)
    {
        scanf("%d",&A);
        if (A==0)
            zero=1;
        else
        {
            int a=abs(A);
            if (a<min)
                min=a;
        }
    }
    if (zero==1)
        printf("0\n");
    else
        printf("%d\n",min);
    return 0;
}
