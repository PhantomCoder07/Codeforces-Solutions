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
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if (a[0]%2==1)
            cout<<"YES"<<endl;
        else
        {
            for (int i=0; i<n; i++)
            {
                if (a[i]%2==1)
                {
                    c=1;
                    break;
                }
            }
            if (c==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
