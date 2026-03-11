#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        set<int> s;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        int c=s.size();
        while (!s.count(c))
            c++;
        cout<<c<<endl;
    }
    return 0;
}
