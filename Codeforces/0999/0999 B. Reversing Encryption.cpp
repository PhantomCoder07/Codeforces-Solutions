#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    string s;
    cin>>n>>s;
    m=n;
    vector<int> a;
    for (int i=1; i<=n; i++)
    {
        if (n%i==0)
            a.push_back(i);
    }
    for (int i=0; i<a.size(); i++)
    {
        reverse(s.begin(),s.begin()+(a[i]));
    }
    cout<<s<<endl;
    return 0;
}
