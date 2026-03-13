#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        string s;
        cin>>n>>k>>s;
        int c=count(s.begin(),s.end(),'B');
        if (c==k) cout<<0<<endl;
        else
        {
            cout<<1<<endl;
            if (c<k)
            {
                int j=k-c;
                c=0;
                for (int i=0; i<n; i++)
                {
                    if (s[i]=='A') c++;
                    if (c==j)
                    {
                        cout<<i+1<<' '<<'B'<<endl;
                        break;
                    }
                }
            }
            else
            {
                int j=c-k;
                c=0;
                for (int i=0; i<n; i++)
                {
                    if (s[i]=='B') c++;
                    if (c==j)
                    {
                        cout<<i+1<<' '<<'A'<<endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
