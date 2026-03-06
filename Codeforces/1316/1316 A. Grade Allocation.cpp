#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        int sum=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if (m<sum)
            cout<<m<<endl;
        else
            cout<<sum<<endl;
    }
    return 0;
}
