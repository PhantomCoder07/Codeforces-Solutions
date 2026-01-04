#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int c,ma=INT_MAX,d;
    for(int i=0; i<n; i++)
    {
        if(a[i]==ma)
            c=1;
        if(a[i]<ma)
            ma=a[i],d=i+1,c=0;
    }
    if(c)
        cout<<"Still Rozdil";
    else
        cout<<d;
    return 0;
}
