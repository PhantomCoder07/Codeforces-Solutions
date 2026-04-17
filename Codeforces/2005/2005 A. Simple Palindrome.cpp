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
        string s="aeiou";
        int m=n/5;
        int c=abs(n-(m*5));
        vector<int> a(5,m);
        for (int i=0; i<5; i++)
        {
            if (c>0)
                a[i]++;
            else
                break;
            c--;
        }
        for (int i=0; i<5; i++)
        {
            for (int j=0; j<a[i]; j++)
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
