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
        int ca=0,cb=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='a')
                ca++;
            else
                cb++;
        }
        if (ca==0 || cb==0)
            cout<<-1<<" "<<-1<<endl;
        else if (ca==cb)
            cout<<1<<" "<<n<<endl;
        else
        {
            for (int i=0; i<n; i++)
            {
                if (s[i]!=s[i+1])
                {
                    cout<<i+1<<" "<<i+2<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
