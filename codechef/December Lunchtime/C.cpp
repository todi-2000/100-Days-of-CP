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
    vector<int>count(26,0);
    for(int i=0;i<s.size();i++)
    {
        count[s[i]-'a']++;
    }
    int x=0,y=0,ans=0;
    for(int i=0;i<26;i++)
    {
        y+=(count[i]/2);
        x += (count[i] % 2);
    }
    if(x>=y)
    cout << y << "\n";
    else
    {
        while(x<y)
        {
            y-=1;
            x+=2;
        }
        cout << y << '\n';
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
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}




