#include <bits/stdc++.h>
using namespace std;
int gcd (int a, int b)
{
    while (b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,f=0;
        cin>>n;
        vector<int> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<i; j++)
            {
                if (gcd(a[i],a[j])<=2)
                    f=1;
            }
        }
        if (f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
