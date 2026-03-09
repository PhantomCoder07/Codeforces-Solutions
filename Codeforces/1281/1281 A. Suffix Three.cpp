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
        reverse(s.begin(),s.end());
        if (s[0]=='o' && s[1]=='p')
            cout<<"FILIPINO"<<endl;
        else if (s[0]=='u' && s[1]=='s')
            cout<<"JAPANESE"<<endl;
        else
            cout<<"KOREAN"<<endl;
    }
    return 0;
}
