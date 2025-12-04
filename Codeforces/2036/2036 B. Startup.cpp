#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int b,c;
        vector<int> a(k+1,0);
        for (int i=0; i<k; i++)
        {
            cin>>b>>c;
            a[b]+=c;
        }
        sort(a.begin(),a.end());
        int ans=0;
        while (n-- && k>=0)
        {
            ans+=a[k];
            k--;
        }
        cout<<ans<<endl;
    }
}
