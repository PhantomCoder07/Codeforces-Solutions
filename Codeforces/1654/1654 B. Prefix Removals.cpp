#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s,a;
        cin>>s;
        a=s;
        reverse(s.begin(),s.end());
        int n=s.length();
        for (int i=0; i<n; i++)
        {
            bool go=false;
            for (int j=i+1; j<n; j++)
            {
                if (a[i]==a[j])
                {
                    s.pop_back();
                    go=true;
                    break;
                }
            }
            if (!go)
                break;
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
    return 0;
}
