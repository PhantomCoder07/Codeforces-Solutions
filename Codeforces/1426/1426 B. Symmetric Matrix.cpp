#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,a,b,c,d,k=0;
        cin>>n>>m;
        for (int i=0; i<n; i++)
        {
            cin>>a>>b>>c>>d;
            if (b==c)
                k++;
        }
        cout<<(k && m%2==0?"YES":"NO")<<endl;
    }
    return 0;
}
