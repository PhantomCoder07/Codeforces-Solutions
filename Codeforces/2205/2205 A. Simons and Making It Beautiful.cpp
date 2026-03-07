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
        if (n>1)
        {
            int p=-1;
            for (int i=0; i<n; i++)
            {
                if (a[i]==n)
                {
                    p=i;
                    break;
                }
            }
            if (p!=0)
            {
                swap(a[0],a[p]);
            }
        }
        for (int i=0; i<n; i++)
            cout<<a[i]<<' ';
        cout<<endl;
    }
    return 0;
}
