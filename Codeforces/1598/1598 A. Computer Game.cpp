#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=0;
        string a,b;
        cin>>n>>a>>b;
        for (int i=0; i<n; i++)
        {
            if (a[i]=='0' || b[i]=='0')
                c++;
        }
        if (c==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
