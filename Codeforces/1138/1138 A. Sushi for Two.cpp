#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1;
    cin>>n;
    vector<int> a(n),b;
    for (int i=0; i<n; i++)
        cin>>a[i];
    for (int i=1; i<n; i++)
    {
        if (a[i]==a[i-1])
            c++;
        else
        {
            b.push_back(c);
            c=1;
        }
    }
    b.push_back(c);
    int ans=0;
    for (int i=0; i<b.size()-1; i++)
        ans=max(ans,2*min(b[i],b[i+1]));
    cout<<ans<<endl;
    return 0;
}
