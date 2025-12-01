#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    vector<int> a(n);
    vector<int> b(1001,0);
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        if (b[a[i]]==0)
            c++;
        b[a[i]]=i+1;
    }
    cout<<c<<endl;
    for (int i=0; i<n; i++)
    {
        if (b[a[i]]==i+1)
            cout<<a[i]<<" ";
    }
    return 0;
}
