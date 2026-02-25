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
        vector<int> a(n),b(51,0);
        for (int i=0; i<n; i++)
            cin>>a[i];
        for (int i=0; i<n; i++)
            for (int j=i+1; j<n; j++)
                b[a[j]-a[i]]=1;
        int ans=0;
        for (auto i: b)
            ans+=i;
        cout<<ans<<endl;
    }
    return 0;
}
