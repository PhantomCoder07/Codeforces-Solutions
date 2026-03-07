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
        vector<int> a(n),b(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        bool ans=false;
        for (int i=0; i<n; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (a[i]>a[j])
                {
                    cout<<"YES\n"<<2<<endl;
                    cout<<a[i]<<' '<<a[j]<<endl;
                    ans=true;
                    break;
                }
            }
            if (ans)
                break;
        }
        if (!ans)
            cout<<"NO"<<endl;
    }
    return 0;
}
