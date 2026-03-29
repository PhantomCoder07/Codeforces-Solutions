#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n),mx(n),mn(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    for (int i=0; i<n; i++)
        mx[i]=max(abs(a[i]-a[0]),abs(a[i]-a[n-1]));
    mn[0]=abs(a[1]-a[0]);
    mn[n-1]=abs(a[n-1]-a[n-2]);
    for (int i=1; i<n-1; i++)
        mn[i]=min(abs(a[i-1]-a[i]),abs(a[i]-a[i+1]));
    for (int i=0; i<n; i++)
        cout<<mn[i]<<' '<<mx[i]<<endl;
    return 0;
}
