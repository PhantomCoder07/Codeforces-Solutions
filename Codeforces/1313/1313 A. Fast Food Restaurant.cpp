#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ans=0;
        if (a)
        {
            ans++;
            a--;
        }
        if (b)
        {
            ans++;
            b--;
        }
        if (c)
        {
            ans++;
            c--;
        }
        if(a<c)
            swap(a,c);
        if(a<b)
            swap(a,b);
        if (a && b)
        {
            ans++;
            a--;
            b--;
        }
        if (a && c)
        {
            ans++;
            a--;
            c--;
        }
        if (b && c)
        {
            ans++;
            b--;
            c--;
        }
        if (a && b && c)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}
