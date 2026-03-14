#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        string a,b;
        cin>>n>>m>>a>>b;
        if (n<m)
        {
            cout<<"NO"<<endl;
            continue;
        }
        bool ans1=true;
        for (int i=1; i<m; i++)
        {
            if (a[n-m+i]!=b[i])
            {
                ans1=false;
                break;
            }
        }
        bool ans2=false;
        for (int i=0; i<=n-m; i++)
        {
            if (a[i]==b[0])
            {
                ans2=true;
                break;
            }
        }
        cout<<(ans1 && ans2?"YES":"NO")<<endl;
    }
}
