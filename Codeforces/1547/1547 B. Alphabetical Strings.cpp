#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int n=s.size()-1;
        int c=0,f=1;
        for (int i=n; i>=0; i--)
        {
            if (s[n]==i+97)
                n--;
            else if (s[c]==i+97)
                c++;
            else
                f=0;
        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
