#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=1;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    for (int i=1; i<n; i++)
    {
        int c=0;
        for (int j=0; j<i; j++)
        {
            if (a[i]%a[j]==0)
                c=1;
        }
        if (c==0)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
