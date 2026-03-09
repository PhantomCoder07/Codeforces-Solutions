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
        int suma=0,sumb=0;
        vector<int> a(n),b(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
            suma+=a[i];
        }
        for (int i=0; i<n; i++)
        {
            cin>>b[i];
            sumb+=b[i];
        }
        if (suma!=sumb)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<pair<int,int>> c;
        for (int i=0; i<n; i++)
        {
            while (a[i]>b[i])
            {
                for (int j=0; j<n; j++)
                {
                    if (a[j]<b[j])
                    {
                        a[i]--;
                        a[j]++;
                        c.push_back({i+1,j+1});
                        break;
                    }
                }
            }
        }
        cout<<c.size()<<endl;
        for (auto &i: c)
            cout<<i.first<<' '<<i.second<<endl;
    }
    return 0;
}
