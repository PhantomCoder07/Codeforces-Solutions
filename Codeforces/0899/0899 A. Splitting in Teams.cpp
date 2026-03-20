#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    int c1=count(a.begin(),a.end(),1);
    int c2=count(a.begin(),a.end(),2);
    if (c1==0)
        cout<<0<<endl;
    else if (c2>c1)
        cout<<c1<<endl;
    else
        cout<<c2+((c1-c2)/3)<<endl;
    return 0;
}
