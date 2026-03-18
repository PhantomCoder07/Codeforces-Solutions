#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> t(5),c(101,0);
    int sum=0,ans=0;
    for (int i=0; i<5; i++)
    {
        cin>>t[i];
        sum+=t[i];
        c[t[i]]++;
    }
    for (int i=1; i<=100; i++)
    {
        if (c[i]>=2)
            ans=max(ans,2*i);
        if (c[i]>=3)
            ans=max(ans,3*i);
    }
    cout<<sum-ans<<endl;
    return 0;
}
