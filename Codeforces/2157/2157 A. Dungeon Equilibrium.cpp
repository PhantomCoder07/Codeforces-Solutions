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
        vector<int> a(n),c(n+1,0);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            c[a[i]]++;
        }
        int sum=0;
        for (int i=0; i<=n; i++)
        {
            if (c[i]>=i)
                sum+=c[i]-i;
            else
                sum+=c[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
