#include <bits/stdc++.h>
using namespace std;
bool solve (int n)
{
    string s=to_string(n);
    vector<int> a(10,0);
    for (int i=0; i<s.length(); i++)
        a[s[i]-'0']++;
    for (int i=0; i<10; i++)
    {
        if (a[i]>1)
            return false;
    }
    return true;
}
int main()
{
    int l,r;
    cin>>l>>r;
    for (int i=l; i<=r; i++)
    {
        if (solve(i))
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
