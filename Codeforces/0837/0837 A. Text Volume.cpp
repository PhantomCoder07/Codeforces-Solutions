#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,mx=0;
    cin>>n;
    cin.ignore();
    string s;
    getline(cin,s);
    for (int i=0; i<n; i++)
    {
        if (s[i]>='A' && s[i]<='Z')
            c++;
        if (s[i]==' ')
        {
            mx=max(mx,c);
            c=0;
        }
    }
    mx=max(mx,c);
    cout<<mx<<endl;
    return 0;
}
