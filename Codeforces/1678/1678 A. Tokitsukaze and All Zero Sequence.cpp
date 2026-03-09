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
        sort(a.begin(),a.end());
        int c=count(a.begin(),a.end(),0);
        if (c!=0)
            cout<<n-c<<endl;
        else
        {
            bool ans=false;
            for (int i=0; i<n-1; i++)
                if (a[i]==a[i+1])
                    ans=true;
            if (ans)
                cout<<n<<endl;
            else
                cout<<n+1<<endl;
        }
    }
    return 0;
}
