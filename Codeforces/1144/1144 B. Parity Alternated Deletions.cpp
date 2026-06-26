#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> e,o;
    int sum=0;
    for (int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        sum+=a;
        if (a%2)
            o.push_back(a);
        else
            e.push_back(a);
    }
    int m=min(o.size(),e.size());
    sort(e.rbegin(),e.rend());
    sort(o.rbegin(),o.rend());
    sum-=accumulate(e.begin(),e.begin()+m,0);
    sum-=accumulate(o.begin(),o.begin()+m,0);
    if (e.size()>m)
        sum-=e[m];
    if (o.size()>m)
        sum-=o[m];
    cout<<sum<<endl;
    return 0;
}
