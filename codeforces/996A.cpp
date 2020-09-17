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
    lli n;
    cin >> n;
    lli ans=0;
    if((n/100)!=0){
    ans=ans+(n/100);
    n=n%(100*(n/100));}
    if((n/20)!=0){
    ans+=(n/20);
    n=n%(20*(n/20));}
    if((n/10)!=0){
    ans += (n / 10);
    n = n % (10 * (n / 10));}
    if((n/5)!=0){
    ans += (n / 5);
    n = n % (5 * (n / 5));}
    if((n/1)!=0){
    ans += (n / 1);
    n = n % (1 * (n / 1));}
    cout << ans << "\n";
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




