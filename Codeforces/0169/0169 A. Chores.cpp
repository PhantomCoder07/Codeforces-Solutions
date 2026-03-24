#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> c(n);
    for (int i=0; i<n; i++)
        cin>>c[i];
    sort(c.begin(),c.end());
    cout<<c[b]-c[b-1]<<endl;
    return 0;
}
