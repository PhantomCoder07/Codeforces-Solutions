#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> a(n),b(n);
    for (int i=0; i<n; i++)
        cin>>a[i]>>b[i];
    for (int i=0; i<n; i++)
        if (b[i]=="rat")
            cout<<a[i]<<endl;
    for (int i=0; i<n; i++)
        if (b[i]=="woman" || b[i]=="child")
            cout<<a[i]<<endl;
    for (int i=0; i<n; i++)
        if (b[i]=="man")
            cout<<a[i]<<endl;
    for (int i=0; i<n; i++)
        if (b[i]=="captain")
            cout<<a[i]<<endl;
    return 0;
}
