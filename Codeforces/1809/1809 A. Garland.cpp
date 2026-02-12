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
        sort(s.begin(),s.end());
        int ans=0;
        vector<int> a(11,0);
        for (int i=0; i<4; i++)
            a[s[i]-'0']++;
        for (int i=0; i<11; i++)
        {
            if (a[i]==4)
                ans=1;
            else if (a[i]==3)
                ans=2;
        }
        if (ans==0)
            cout<<4<<endl;
        else if (ans==1)
            cout<<-1<<endl;
        else if (ans==2)
            cout<<6<<endl;
    }
    return 0;
}
