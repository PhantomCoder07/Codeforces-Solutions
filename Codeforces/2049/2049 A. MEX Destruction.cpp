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
        vector<int> a(n+1);
        for (int i=1; i<=n; i++)
        {
            cin>>a[i];
            if (a[i]!=0 && a[i-1]==0)
                c++;
        }
        cout<<min(c,2)<<endl;
    }
    return 0;
}
