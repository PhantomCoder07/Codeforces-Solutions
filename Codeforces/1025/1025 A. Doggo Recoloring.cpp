#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    vector<int> a(26,0);
    for (int i=0; i<n; i++)
    {
        a[s[i]-'a']++;
    }
    bool ans=false;
    for (int i=0; i<26; i++)
    {
        if (a[i]>=2)
        {
            ans=true;
            break;
        }
    }
    cout<<(ans || n==1?"YES":"NO")<<endl;
    return 0;
}
