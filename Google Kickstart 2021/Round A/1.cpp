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
    int n,target;
    cin >> n >> target;
    string s;
    cin >> s;
    int score = 0;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
            score++;
    }
    cout << "Case #" << t << ": " << abs(target - score) << "\n";

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
    for(int i=1;i<=t;i++)
    {
        solve(i);
    }
    return 0;
}




