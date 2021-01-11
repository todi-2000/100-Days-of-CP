// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

void solve()
{
    //write your code here
    string s;
    cin >> s;
    int count = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='a')
        count++;
    }
    if(count%2)
    cout << ":(" << "\n";
    else
    {
        string ans,temp,temp1;int i=0;
        for(i=0;i<s.size() && temp.size()<count/2;i++)
        {
            ans+=s[i];
            if(s[i]!='a') temp+=s[i];
        }
        while(s[i]=='a')
        ans+=s[i],i++;
        temp1=s.substr(i,s.size());
        if(temp==temp1)
        cout << ans << "\n";
        else
        cout << ":(" << "\n";
    }
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen ("A:/c++/inputf.in", "r", stdin);
    freopen ("A:/c++/outputf.in", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}




