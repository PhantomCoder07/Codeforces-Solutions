#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> x(n),y(n);
    for (int i=0; i<n; i++)
        cin>>x[i]>>y[i];
    int cx0=count(x.begin(),x.end(),0);
    int cx1=count(x.begin(),x.end(),1);
    int cy0=count(y.begin(),y.end(),0);
    int cy1=count(y.begin(),y.end(),1);
    cout<<min(cx0,cx1)+min(cy0,cy1)<<endl;
    return 0;
}
