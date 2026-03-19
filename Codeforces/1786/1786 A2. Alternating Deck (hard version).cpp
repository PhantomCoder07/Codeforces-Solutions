#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a=0,b=0,c=0,d=0;
        int sum=0;
        for (int i=1; ; i++)
        {
            int j=i;
            if (sum+i>n)
                j=n-sum;
            if (i%4==0 || i%4==1)
            {
                if (j%2==0)
                {
                    a+=j/2;
                    b+=j/2;
                }
                else
                {
                    a+=j/2+1;
                    b+=j/2;
                }
            }
            else
            {
                if (j%2==0)
                {
                    c+=j/2;
                    d+=j/2;
                }
                else
                {
                    c+=j/2;
                    d+=j/2+1;
                }
            }
            sum+=j;
            if (sum==n)
                break;
        }
        cout<<a<<' '<<b<<' '<<c<<' '<<d<<endl;
    }
    return 0;
}
