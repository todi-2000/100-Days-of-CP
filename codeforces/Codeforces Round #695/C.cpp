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
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    vector<lli>b1(n1);
    vector<lli>b2(n2);
    vector<lli>b3(n3);
    for(int i=0;i<n1;i++)
        cin >> b1[i];
    for (int i = 0; i < n2; i++)
        cin >> b2[i];
    for (int i = 0; i < n1; i++)
        cin >> b3[i];
    sort(b1.begin(),b1.end());
    sort(b2.begin(),b2.end());
    sort(b2.begin(), b2.end());
    
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




