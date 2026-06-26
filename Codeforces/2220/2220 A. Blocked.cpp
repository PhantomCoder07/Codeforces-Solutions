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
        for (int i=0; i<n-1; i++)
        {
            if (a[i]==a[i+1])
            {
                ans=false;
                break;
            }
        }
        if (ans)
        {
            for (int i=0; i<n; i++)
                cout<<a[i]<<' ';
            cout<<endl;
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}
