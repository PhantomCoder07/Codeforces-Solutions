#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>> a;
    for (int i=0; i<n; i++)
    {
        int b;
        cin>>b;
        a.push_back({b,i+1});
    }
    sort(a.rbegin(),a.rend());
    long long sum=0;
    for (int i=0; i<n; i++)
        sum+=1LL*a[i].first*i+1;
    cout<<sum<<endl;
    for (int i=0; i<n; i++)
        cout<<a[i].second<<' ';
    return 0;
}
