#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    char ch='a';
    for (int i=0; i<n; i++)
    {
        cout<<ch;
        ch++;
        if (ch-'a'>=k)
            ch='a';
    }
    return 0;
}
