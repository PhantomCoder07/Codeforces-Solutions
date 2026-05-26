#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int m=1,l=k;
        vector<int> a(n+1,0);
        while (k<=n)
        {
            a[k]=m++;
            k+=l;
        }
        for (int i=1; i<=n; i++)
            if (a[i]==0)
                a[i]=m++;
        for (int i=1; i<=n; i++)
            cout<<a[i]<<' ';
        cout<<endl;
    }
    return 0;
}
