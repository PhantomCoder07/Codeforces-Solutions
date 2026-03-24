#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i=30; i>=0; i--)
        if ((n>>i)%2)
            cout<<i+1<<' ';
    return 0;
}
