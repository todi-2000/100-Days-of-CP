// https://codeforces.com/contest/1400/problem/C
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
using namespace std;
typedef long long int lli;

void solve()
{
    string s,aux;
    cin >> s;
    int x;
    cin >> x;
    for(int i=0;i<s.size();i++)
        aux+='0';
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            if(i-x>=0) aux[i-x]='1';
            if(i+x<s.size()) aux[i+x]='1';
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            if(i-x>=0) aux[i-x]='0';
            if(i+x<s.size()) aux[i+x]='0';
        }
    }
    string w;
    for(int i=0;i<s.size();i++)
        w+='0';
    for(int i=0;i<aux.size();i++)
    {
        if(i>=x && aux[i-x]=='1') {w[i]='1';}
        else if(i+x<aux.size() && aux[i+x]=='1') {w[i]='1';}
        else w[i]='0';
    }
    if(w==s)
    cout << aux << "\n";
    else 
    cout << -1 << "\n";
}



int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("A:/c++/inputf.in", "r", stdin);
    freopen ("A:/c++/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}




