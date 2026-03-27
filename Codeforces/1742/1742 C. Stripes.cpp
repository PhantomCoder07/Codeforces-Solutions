#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        vector<string> s(8);
        for (int i=0; i<8; i++)
            cin>>s[i];
        bool ans=true;
        for (int i=0; i<8; i++)
        {
            ans=true;
            for (int j=0; j<8; j++)
            {
                if (s[i][j]!='R')
                {
                    ans=false;
                    break;
                }
            }
            if (ans)
            {
                cout<<'R'<<endl;
                break;
            }
        }
        if (!ans)
            cout<<'B'<<endl;
    }
    return 0;
}
