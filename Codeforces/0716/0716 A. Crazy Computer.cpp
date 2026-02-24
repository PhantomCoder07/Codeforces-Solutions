#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,m=1;
    cin>>n>>c;
    vector<int> a(n);
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        if (a[i]-a[i-1]<=c && i!=0)
            m++;
        else
            m=1;
    }
    cout<<m<<endl;
    return 0;
}
