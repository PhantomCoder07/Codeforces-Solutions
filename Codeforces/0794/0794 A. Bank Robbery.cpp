#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,m=0;
    cin>>a>>b>>c>>n;
    vector<int> x(n);
    for (int i=0; i<n; i++)
    {
        cin>>x[i];
        if (x[i]>b && x[i]<c)
            m++;
    }
    cout<<m<<endl;
    return 0;
}
