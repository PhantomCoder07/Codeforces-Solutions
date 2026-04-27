#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=0;
        cin>>n;
        vector<int> f((n*n)+1,0);
        for (int i=0; i<n*n; i++)
        {
            int a;
            cin>>a;
            f[a]++;
        }
        bool ans=true;
        for (int i=1; i<=n*n; i++)
        {
            if (f[i]>n*(n-1))
            {
                ans=false;
                break;
            }
        }
        cout<<(ans?"YES":"NO")<<endl;
    }
    return 0;
}
