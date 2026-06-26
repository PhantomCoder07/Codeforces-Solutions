#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        sort(a.rbegin(),a.rend());
        bool ans=true;
        for (int i=2; i<n; i++)
        {
            if (a[i-2]%a[i-1]!=a[i])
            {
                ans=false;
                break;
            }
        }
        if (ans)
            cout<<a[0]<<' '<<a[1]<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
