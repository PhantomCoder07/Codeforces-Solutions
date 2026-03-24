#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=0;
        cin>>n;
        vector<int> a(n+2);
        a[0]=0;
        a[n+1]=1440;
        for (int i=1; i<=n; i++)
            cin>>a[i];
        for (int i=1; i<=n+1; i++)
            c+=(a[i]-a[i-1])/120;
        cout<<(c>=2?"YES":"NO")<<endl;
    }
    return 0;
}
