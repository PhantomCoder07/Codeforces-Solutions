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
        {
            cin>>a[i];
        }
        for (int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int ca=1,cb=1;
        for (int i=0; i<n-1; i++)
        {
            if (a[i]!=a[i+1])
                ca++;
            if (b[i]!=b[i+1])
                cb++;
        }
        if (cb==1 && ca<=2)
            cout<<"NO"<<endl;
        else if (ca==1 && cb<=2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
