#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n>>c;
    vector<int> p(n),t(n);
    for (int i=0; i<n; i++)
        cin>>p[i];
    for (int i=0; i<n; i++)
        cin>>t[i];
    int suma=0,sumb=0,tm=0;
    for (int i=0; i<n; i++)
    {
        tm+=t[i];
        suma+=max(0,p[i]-(c*tm));
    }
    reverse(p.begin(),p.end());
    reverse(t.begin(),t.end());
    tm=0;
    for (int i=0; i<n; i++)
    {
        tm+=t[i];
        sumb+=max(0,p[i]-(c*tm));
    }
    if (suma>sumb)
        cout<<"Limak"<<endl;
    else if (sumb>suma)
        cout<<"Radewoosh"<<endl;
    else
        cout<<"Tie"<<endl;
    return 0;
}
