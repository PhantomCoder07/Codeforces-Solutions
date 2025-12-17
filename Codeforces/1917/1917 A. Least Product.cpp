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
        int c1=0,c2=0;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            if (a[i]<0)
                c1^=1;
            if (a[i]==0)
                c2=1;
        }
        if (c1==1 || c2==1)
            cout<<0<<endl;
        else
            cout<<1<<endl<<1<<" "<<0<<endl;
    }
    return 0;
}
