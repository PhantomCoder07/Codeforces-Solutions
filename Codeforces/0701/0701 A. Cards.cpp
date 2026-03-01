#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n),p1(n/2),p2(n/2);
    int sum=0,k=0;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int c=sum/(n/2);
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[i]+a[j]==c)
            {
                p1[k]=i+1;
                p2[k]=j+1;
                k++;
                a[i]=0;
                a[j]=0;
                break;
            }
        }
    }
    for (int i=0; i<n/2; i++)
        cout<<p1[i]<<' '<<p2[i]<<endl;
    return 0;
}
