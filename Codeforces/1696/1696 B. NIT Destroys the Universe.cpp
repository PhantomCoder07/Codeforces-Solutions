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
            c+=(a[i]==0);
        }
        if (c==n)
        {
            cout<<0<<endl;
            continue;
        }
        c=0;
        int mxi=-1,mni=-1;
        for (int i=0; i<n; i++)
        {
            if (a[i]!=0)
            {
                mni=i+1;
                break;
            }
        }
        for (int i=n-1; i>=0; i--)
        {
            if (a[i]!=0)
            {
                mxi=i-1;
                break;
            }
        }
        for (int i=mni; i<=mxi; i++)
            if (a[i]==0)
                c++;
        if (c==0)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}
