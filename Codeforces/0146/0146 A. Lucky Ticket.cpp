#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    bool ans=true;
    int suma=0,sumb=0;
    for (int i=0; i<n; i++)
        if (s[i]!='4' && s[i]!='7')
            ans=false;
    for (int i=0; i<n/2; i++)
        suma+=(s[i]-'a');
    for (int i=n/2; i<n; i++)
        sumb+=(s[i]-'a');
    cout<<(ans && suma==sumb?"YES":"NO")<<endl;
    return 0;
}
