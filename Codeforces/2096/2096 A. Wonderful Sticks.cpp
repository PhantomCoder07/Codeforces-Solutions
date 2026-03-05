#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int st=1,ed=n;
        vector<int> a(n);
        for (int i=s.length()-1; i>=0; i--)
        {
            if (s[i]=='>')
            {
                a.push_back(ed);
                ed--;
            }
            else
            {
                a.push_back(st);
                st++;
            }
        }
        a.push_back(st);
        reverse(a.begin(),a.end());
        for (int i=0; i<n; i++)
            cout<<a[i]<<' ';
        cout<<endl;
    }
    return 0;
}
