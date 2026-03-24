#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length(),k=0;
    string t="heidi";
    for (int i=0; i<n; i++)
    {
        if (s[i]==t[k])
            k++;
    }
    cout<<(k==5?"YES":"NO")<<endl;
    return 0;
}
