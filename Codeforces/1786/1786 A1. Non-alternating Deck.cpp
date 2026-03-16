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
        int a=0,b=0;
        for (int i=1; ; i++)
        {
            if (i%4==0 || i%4==1)
            {
                a+=i;
                if (a+b==n)
                    break;
                else if (a+b>n)
                {
                    a-=i;
                    a+=(n-(a+b));
                    break;
                }
            }
            else
            {
                b+=i;
                if (a+b==n)
                    break;
                else if (a+b>n)
                {
                    b-=i;
                    b+=(n-(a+b));
                    break;
                }
            }
        }
        cout<<a<<' '<<b<<endl;
    }
    return 0;
}
