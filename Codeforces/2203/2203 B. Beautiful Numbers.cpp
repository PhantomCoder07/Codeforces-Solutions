#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string x;
        cin>>x;
        int n=x.size();
        int sum=0;
        for (int i=0; i<n; i++)
            sum+=(x[i]-'0');
        if (sum<=9)
        {
            cout<<0<<endl;
            continue;
        }
        int total=sum-9;
        vector<int> a;
        for (int i=0; i<n; i++)
        {
            int d=x[i]-'0';
            if (i == 0 && n > 1)
                a.push_back(d-1);
            else
                a.push_back(d);
        }
        sort(a.rbegin(),a.rend());
        int ans=0,c=0;
        for (int i: a)
        {
            c+=i;
            ans++;
            if (c>=total)
                break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
