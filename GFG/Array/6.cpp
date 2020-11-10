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
    int n,m;
    cin >> n >> m;
    vector<int>a(n),b(m);
    set<int>s;
    for(int i=0;i<n;i++){
    cin >> a[i];
    s.insert(a[i]);}
    for(int j=0;j<m;j++)
    {
        cin >> b[j];
        s.insert(b[j]);}
    cout << s.size() << "\n";

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




