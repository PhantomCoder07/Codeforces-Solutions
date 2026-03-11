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
        int ans=0;
        for (int i=0; i<k; i++)
        {
            int c=0;
            for (int j=0; j<n; j++)
                if ((a[j]>>i)%2)
                    c++;
            if (c>n-c)
                ans^=(1<<i);
        }
        cout<<ans<<endl;
    }
    return 0;
}
