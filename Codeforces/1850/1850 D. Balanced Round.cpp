#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        int mx=0,c=1;
        for (int i=0; i<n-1; i++)
        {
            if (a[i+1]-a[i]<=k)
                c++;
            else
            {
                mx=max(mx,c);
                c=1;
            }
        }
        mx=max(mx,c);
        cout<<n-mx<<endl;
    }
    return 0;
}
