#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        sort(s1.begin(),s1.end());
        vector<int> a(26,0);
        for (int i=0; i<s1.length(); i++)
            a[s1[i]-'a']++;
        if (s2!="abc" || !a[0] || !a[1] || !a[2])
            cout<<s1<<endl;
        else
        {
            while (a[0]--)
                cout<<'a';
            while (a[2]--)
                cout<<'c';
            while (a[1]--)
                cout<<'b';
            for (int i=3; i<26; i++)
                while (a[i]--)
                    cout<<(char)('a'+i);
            cout<<endl;
        }
    }
    return 0;
}
