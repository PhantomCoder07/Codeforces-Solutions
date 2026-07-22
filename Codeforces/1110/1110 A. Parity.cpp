#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b,k;
    cin>>b>>k;
    vector<int> a(k);
    int ce=0,co=0;
    for (int i=0; i<k; i++)
    {
        cin>>a[i];
        if (a[i]%2)
            co++;
        else
            ce++;
    }
    if (b%2)
    {
        if (co%2)
            cout<<"odd"<<endl;
        else
            cout<<"even"<<endl;
    }
    else
    {
        if (a.back()%2)
            cout<<"odd"<<endl;
        else
            cout<<"even"<<endl;
    }
    return 0;
}
