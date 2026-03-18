#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1;
    cin>>n;
    vector<int> a(n),b;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        if (a[i]!=0)
            b.push_back(a[i]);
    }
    if (b.empty())
    {
        cout<<0<<endl;
        return 0;
    }
    sort(b.begin(),b.end());
    for (int i=0; i<b.size()-1; i++)
    {
        if (b[i]!=b[i+1])
            c++;
    }
    cout<<c<<endl;
    return 0;
}
