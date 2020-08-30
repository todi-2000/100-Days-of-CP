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
    int n;
    cin >> n;
    string s,s1;
    set<char>countc;
    for(int i=0;i<n;i++)
    {
        cin >> s1;
        for(int i=0;i<s1.size();i++)
            countc.insert(s1[i]);
        s+=s1;
    }
    for(auto a:countc)
    {
        if(count(s.begin(),s.end(),a)%n!=0)
        {cout << "No" << "\n";return;}
    }
    cout << "Yes"<< "\n";
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




