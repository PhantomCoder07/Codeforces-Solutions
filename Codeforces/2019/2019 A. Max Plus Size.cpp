#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m=0;
        cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            m=max(m,a[i]+((i+1)%2?(n+1)/2:n/2));
        }
        cout<<m<<endl;
    }
    return 0;
}
