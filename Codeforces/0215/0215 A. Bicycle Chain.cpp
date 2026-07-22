#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,mx=0,c=0;
    vector<int> a(n),b(m);
    cin>>n;
    a.resize(n);
    for (int i=0; i<n; i++)
        cin>>a[i];
    cin>>m;
    b.resize(m);
    for (int i=0; i<m; i++)
        cin>>b[i];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (b[j]%a[i]==0)
            {
                if (b[j]/a[i]>mx)
                {
                    mx=b[j]/a[i];
                    c=1;
                }
                else if (b[j]/a[i]==mx)
                    c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
