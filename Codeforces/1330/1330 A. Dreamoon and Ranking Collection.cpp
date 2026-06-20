#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while (t--) 
    {
        int n,x,c=0;
        cin>>n>>x;
        vector<int> a(n+x+5,0),b(n+x+5,0);
        for (int i=0; i<n; i++) {
            int k;
            cin>>k;
            if (k<(int)a.size())
                a[k]++;
        }
        for (int i=1; i<(int)a.size(); i++) 
            b[i]=b[i-1]+(a[i]==0);
        for (int i=n+x; i>=1; i--) 
        {
            if (b[i]<=x) 
            {
                c=i;
                break;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}