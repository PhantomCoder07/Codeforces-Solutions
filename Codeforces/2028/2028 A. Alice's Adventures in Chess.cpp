#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,b,c=100;
        string s;
        cin>>n>>a>>b>>s;
        bool ans=false;
        while (c)
        {
            for (int i=0; i<n; i++)
            {
                if (s[i]=='N')
                    b--;
                else if (s[i]=='E')
                    a--;
                else if (s[i]=='S')
                    b++;
                else
                    a++;
                if (a==0 && b==0)
                {
                    ans=true;
                    break;
                }
            }
            c--;
        }
        cout<<(ans?"YES":"NO")<<endl;
    }
    return 0;
}
