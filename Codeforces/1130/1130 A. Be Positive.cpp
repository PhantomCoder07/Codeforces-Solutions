#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,cp=0,cn=0;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        if (a[i]>0)
            cp++;
        if (a[i]<0)
            cn++;
    }
    if (n%2)
        n++;
    if (cp>=n/2)
        cout<<1<<endl;
    else if (cn>=n/2)
        cout<<-1<<endl;
    else
        cout<<0<<endl;
    return 0;
}
