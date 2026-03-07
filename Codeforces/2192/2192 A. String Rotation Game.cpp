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
        bool f=false;
        for (int i=0; i<n; i++)
        {
            if (s[i]!=s[(i+1)%n])
                c++;
            else
                f=true;
        }
        if (f)
            cout<<c+1<<endl;
        else
            cout<<n<<endl;
    }
}
