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
        int cQ=0,cA=0,f=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='Q')
            {
                cQ++;
                for (int j=i+1; j<n; j++)
                {
                    if (s[j]=='A')
                    {
                        cA++;
                        s[j]='S';
                        f=0;
                        break;
                    }
                    else
                        f=1;
                }
            }
            if (cQ>cA)
            {
                f=1;
                break;
            }
        }
        if (f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
