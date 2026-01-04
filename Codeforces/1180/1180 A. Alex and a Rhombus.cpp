#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=1;
    int sum=0;
    for (int i=0; i<n-1; i++)
    {
        sum+=(2*m);
        m+=2;
    }
    cout<<sum+m<<endl;
    return 0;
}
