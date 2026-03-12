#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    int sum=0;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if (sum<0)
        sum*=(-1);
    if (sum==0)
        cout<<0<<endl;
    else
    {
        int ans=sum/x;
        if (sum%x!=0)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}
