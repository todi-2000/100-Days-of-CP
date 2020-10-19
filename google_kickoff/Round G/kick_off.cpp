// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

void solve(int t)
{
    //write your code here
    string s;
    cin >> s;
    int ans=0,count1=0;
    string s1="KICK",s2="START";
    if(s.size()>=9){
    for(int i=0;i<=s.size()-5;i++)
    {
        if(s.substr(i,4)==s1) count1++;
        else if(s.substr(i,5)==s2)
            ans += count1 ;
    }}
    cout << "Case #" << t << ": "<<ans << "\n";
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
    for(int i=0;i<t;i++)
    {
        solve(i+1);
    }
    return 0;
}




