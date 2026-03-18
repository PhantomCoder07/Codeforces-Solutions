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
        vector<int> a(n),b(n),c(n),d(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i]>>b[i];
            if (a[i]>b[i])
            {
                c[i]=b[i];
                d[i]=a[i];
            }
            else
            {
                c[i]=a[i];
                d[i]=b[i];
            }
        }
        int mx=*max_element(d.begin(),d.end());
        long long sum=0;
        for (int i=0; i<n; i++)
            sum+=c[i];
        cout<<2*sum+2*mx<<endl;
    }
    return 0;
}
