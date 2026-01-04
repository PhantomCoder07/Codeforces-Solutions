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
        vector<int> x(n),y(n);
        int sum=0;
        for (int i=0; i<n; i++)
        {
            cin>>x[i]>>y[i];
            if (i>=1)
                sum+=(x[i]+y[i]);
        }
        cout<<2*(2*m+sum)<<endl;
    }
    return 0;
}
