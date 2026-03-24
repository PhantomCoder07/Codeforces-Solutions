#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,m=0;
    cin>>n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    for (int i=0; i<n-1; i++)
    {
        if (a[i]==a[i+1] && a[i]!=0)
            c++;
        else
        {
            if (c==1 && m!=-1)
                m++;
            if (c>1)
                m=-1;
            c=0;
        }
    }
    if (c==1 && m!=-1)
        m++;
    if (c>1)
        m=-1;
    cout<<m<<endl;
    return 0;
}
