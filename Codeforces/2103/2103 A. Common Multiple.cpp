#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,c=0;
        cin>>n;
        vector<int> x(101,0);
        for (int i=0; i<n; i++)
        {
            cin>>a;
            x[a]++;
        }
        for (int i=1; i<=n; i++)
        {
            if (x[i]!=0)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
