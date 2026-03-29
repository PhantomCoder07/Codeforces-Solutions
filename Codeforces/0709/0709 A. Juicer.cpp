#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,d,c=0;
    cin>>n>>b>>d;
    int sum=0;
    for (int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if (a<=b)
            sum+=a;
        if (sum>d)
        {
            sum=0;
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
