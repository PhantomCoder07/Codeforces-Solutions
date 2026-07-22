#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    vector<string> a(n),b(n);
    for (int i=0; i<n; i++)
        cin>>a[i]>>b[i];
    for (int i=0; i<n; i++)
    {
        bool ans=true;
        for (int j=i-1; j>=0; j--)
        {
            if (a[i]==a[j] && b[i]==b[j])
            {
                ans=false;
                break;
            }
        }
        if (ans)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
