#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    vector<int> c(k,0);
    for (int i=0; i<n; i++)
        c[s[i]-'A']++;
    int mn=*min_element(c.begin(),c.end());
    cout<<k*mn<<endl;
    return 0;
}
