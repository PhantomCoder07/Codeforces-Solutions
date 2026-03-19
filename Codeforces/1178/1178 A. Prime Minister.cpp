#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    vector<int> a(n),b;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if (a[0]>(sum/2))
    {
        cout<<"1\n1"<<endl;
        return 0;
    }
    int suma=a[0];
    b.push_back(1);
    for (int i=1; i<n; i++)
    {
        if ((a[0]/2)>=a[i])
        {
            b.push_back(i+1);
            suma+=a[i];
        }
    }
    if (b.size()==1 || suma<=(sum/2))
    {
        cout<<0<<endl;
        return 0;
    }
    cout<<b.size()<<endl;
    for (int i: b)
        cout<<i<<' ';
    return 0;
}
