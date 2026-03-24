#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c=0;
    cin>>n>>a>>b;
    vector<int> x(a),y(b);
    for (int i=0; i<a; i++)
        cin>>x[i];
    for (int i=0; i<b; i++)
        cin>>y[i];
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    for (int i=0; i<n; i++)
    {
        if (i+1==x[c] && c<a)
        {
            cout<<1<<' ';
            c++;
        }
        else
            cout<<2<<' ';
    }
    return 0;
}
