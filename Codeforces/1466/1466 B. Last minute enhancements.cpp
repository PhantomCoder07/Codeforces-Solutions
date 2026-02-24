#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        vector<int> a(n),f(2*n+2,0);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            f[a[i]]++;
        }
        for(int i=1; i<=2*n; i++)
        {
            if(f[i]>1)
                f[i+1]++;
        }
        for(int i=1; i<=2*n+1; i++)
        {
            if(f[i]>0)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
