#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k,c=0;
        cin>>n>>k;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        for (int i=1; i<=n; i++)
        {
            if (a[i-1]%k!=i%k)
                c++;
        }
        if (c==0)
            cout<<0<<endl;
        else if (c==2)
            cout<<1<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
