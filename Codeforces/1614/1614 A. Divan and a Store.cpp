#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,l,r,k,c=0;
        cin>>n>>l>>r>>k;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        long long sum=0;
        sort(a.begin(),a.end());
        for (int i=0; i<n; i++)
        {
            if (a[i]>=l && a[i]<=r)
            {
                sum+=a[i];
                if (sum<=k)
                    c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
