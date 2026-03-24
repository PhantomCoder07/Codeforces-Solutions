#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,m,sum=0;
    cin>>n>>h>>m;
    vector<int> a(n,h);
    for (int i=0; i<m; i++)
    {
        int l,r,x;
        cin>>l>>r>>x;
        for (int j=l-1; j<r; j++)
        {
            a[j]=min(a[j],x);
        }
    }
    for (int i=0; i<n; i++)
        sum+=pow(a[i],2);
    cout<<sum<<endl;
    return 0;
}
