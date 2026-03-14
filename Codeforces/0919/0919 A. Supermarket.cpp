#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(n);
    vector<double> c(n);
    for (int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
        c[i]=(double)a[i]/b[i];
    }
    sort(c.begin(),c.end());
    cout<<fixed<<setprecision(8)<<m*c[0]<<endl;
    return 0;
}
