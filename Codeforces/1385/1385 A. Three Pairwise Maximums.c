#include<stdio.h>
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		if (x>y)
            swap(&x,&y);
        if (x>z)
            swap(&x,&z);
        if (y>z)
            swap(&y,&z);
        if (y==z)
        {
            printf("YES\n");
            printf("%d %d %d\n",x,x,z);
        }
        else
            printf("NO\n");
	}
	return 0;
}
