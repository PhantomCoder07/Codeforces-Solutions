#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    int ca=0,cb=0,cc=0;
    for (int i=0; i<a.length(); i++)
        if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
            ca++;
    for (int i=0; i<b.length(); i++)
        if (b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u')
            cb++;
    for (int i=0; i<c.length(); i++)
        if (c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u')
            cc++;
    if (ca==5 && cb==7 && cc==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return  0;
}
