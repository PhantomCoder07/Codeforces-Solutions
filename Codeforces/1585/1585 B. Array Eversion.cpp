#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
            cin>>a[i];
        int lst=n-1,c=0;
        while (1)
        {
            int m=-1;
            for (int i=lst-1; i>=0; i--)
            {
                if (a[i]>a[lst])
                {
                    m=i;
                    break;
                }
            }
            if (m==-1)
                break;
            c++;
            lst=m;
        }
        cout<<c<<endl;
    }
    return 0;
}
