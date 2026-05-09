#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0;
    cin>>n;
    vector<int> a(n),c;
    for (int i=0; i<n; i++)
        cin>>a[i];
    for (int i=0; i<n; i++)
    {
        if (a[i]==1)
            m++;
        else
        {
            c.push_back(m);
            m=0;
        }
    }
    c.push_back(m);
    int k=c.size();
    int mx=*max_element(c.begin(),c.end());
    cout<<max(mx,c[0]+c[k-1])<<endl;
    return 0;
}
