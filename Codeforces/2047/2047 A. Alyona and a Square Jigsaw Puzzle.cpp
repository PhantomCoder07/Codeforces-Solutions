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
        int sum=0,ans=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            int d=sqrt(sum);
            if (d*d==sum && d%2==1)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
