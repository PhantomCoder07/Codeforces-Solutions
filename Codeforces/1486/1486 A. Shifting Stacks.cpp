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
        vector<int> a(n);
        long long sum=0,ans=0;
        bool ok=true;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            ans+=i;
            if (sum<ans)
                ok=false;
        }
        cout<<(ok?"YES":"NO")<<endl;
    }
    return 0;
}
