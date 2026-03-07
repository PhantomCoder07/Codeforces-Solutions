#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    string s;
    cin>>n>>s;
    vector<int> a;
    for (int i=0; i<n; i++)
    {
        if (s[i]=='B')
            c++;
        else if (c!=0)
        {
            a.push_back(c);
            c=0;
        }
    }
    if (c>0)
        a.push_back(c);
    cout<<a.size()<<endl;
    for (int i=0; i<a.size(); i++)
        cout<<a[i]<<' ';
    return 0;
}
