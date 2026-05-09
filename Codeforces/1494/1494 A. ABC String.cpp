#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool ans=false;
        for(int i=0; i<8; i++)
        {
            int sum=0;
            for(int j=0; s[j]; ++j)
            {
                sum+=(i>>s[j]-'A')&1?1:-1;
                if(sum<0)
                    break;
            }
            if(sum==0)
            {
                ans=true;
                break;
            }
        }
        cout<<(ans?"YES":"NO")<<endl;
    }
    return 0;
}
