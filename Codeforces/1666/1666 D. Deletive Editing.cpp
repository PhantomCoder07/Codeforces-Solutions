#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        string s,t;
        cin>>s>>t;
        int m=t.length(),k=s.length();
        vector<int> a(m,0);
        for (int i=0; i<k; i++)
        {
            for (int j=0; j<m; j++)
            {
                if (s[i]==t[j] && a[j]==0)
                {
                    a[j]++;
                    break;
                }
            }
        }
        bool ans=true;
        for (int i=0; i<m; i++)
        {
            if (t[i]==0)
            {
                ans=false;
                break;
            }
        }
        if (!ans)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for (int i=k-1; i>=0; i--)
        {
            for (int j=m-1; j>=0; j--)
            {
                if (s[i]==t[j] && a[j]==1)
                {
                    a[j]++;
                    m--;
                    break;
                }
            }
            for (int j=0; j<m; j++)
            {
                if (a[j]!=1)
                {
                    ans=false;
                    break;
                }
            }
            if (!ans)
                break;
        }
        cout<<(ans?"YES":"NO")<<endl;
    }
    return 0;
}
