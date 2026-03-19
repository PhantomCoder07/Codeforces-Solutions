#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> s(n);
    for (int i=0; i<n; i++)
        cin>>s[i];
    int mxi=INT_MIN,mxj=INT_MIN,mni=INT_MAX,mnj=INT_MAX;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (s[i][j]=='B')
            {
                mxi=max(mxi,i);
                mxj=max(mxj,j);
                mni=min(mni,i);
                mnj=min(mnj,j);
            }
        }
    }
    cout<<(mxi+mni)/2+1<<' '<<(mxj+mnj)/2+1<<endl;
    return 0;
}
