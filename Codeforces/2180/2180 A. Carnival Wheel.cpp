#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int l,a,b,c=0;
        cin>>l>>a>>b;
        for (int i=0; i<l; i++)
        {
            int d=(a+i*b)%l;
            if (d>c)
                c=d;
        }
        cout<<c<<endl;
    }
    return 0;
}
