#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> a(n);
        for (int i=0; i<n; i++)
        {
            int l;
            cin>>l;
            a[i].resize(l);
            for (int j=0; j<l; j++)
                cin>>a[i][j];
        }
        vector<int> ans;
        unordered_set<int> done1;
        vector<bool> f(n,false);
        int m=n;
        while (m--)
        {
            int p=-1;
            vector<int> b;
            for (int i=0; i<n; i++)
            {
                if (f[i])
                    continue;
                vector<int> c;
                unordered_set<int> done2;
                for (int j=a[i].size()-1; j>=0; j--)
                {
                    int d=a[i][j];
                    if (!done1.count(d) && !done2.count(d))
                    {
                        c.push_back(d);
                        done2.insert(d);
                    }
                }
                if (p==-1 || c<b)
                {
                    p=i;
                    b=move(c);
                }
            }
            for (int i: b)
                ans.push_back(i);
            for (int i: a[p])
                done1.insert(i);
            f[p]=true;
        }
        for (int i=0; i<ans.size(); i++)
        {
            if (i)
                cout<<' ';
            cout<<ans[i];
        }
        cout<<endl;
    }
    return 0;
}
