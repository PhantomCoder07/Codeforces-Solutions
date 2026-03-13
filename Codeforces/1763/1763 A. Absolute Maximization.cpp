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
        int ans1=2047,ans2=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            ans1&=a[i];
            ans2|=a[i];
        }
        cout<<ans2-ans1<<endl;
    }
    return 0;
}
