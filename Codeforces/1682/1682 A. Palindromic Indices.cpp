#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=0;
        string s;
        cin>>n>>s;
        if (n%2==0)
        {
            for (int i=n/2; i>0; i--)
            {
                if (s[i]!=s[i-1])
                    break;
                c++;
            }
            cout<<2*c<<endl;
        }
        else
        {
            c=1;
            for (int i=n/2; i>0; i--)
            {
                if (s[i]!=s[i-1])
                    break;
                c++;
            }
            cout<<(2*c)-1<<endl;
        }
    }
    return 0;
}
