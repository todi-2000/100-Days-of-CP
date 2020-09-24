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
    vector<int>arr(n);
    set<int>s;
    for(int i=0;i<n;i++)
    {cin >> arr[i];s.insert(arr[i]);}
    if(s.size()==1) 
    {
        cout << 0 ;return;
    }
    else if(s.size()==2)
    {
        int diff=0;
        for(auto i:s)
        diff=i-diff;
        if(abs(diff)%2==0)
        cout << abs(diff)/2 ;
        else
        cout << abs(diff);
        return;
    }
    else if(s.size()>3)
    {
        cout << -1 << "\n";return;
    }
    vector<int>v;
    set<int>s1;
    for(auto i:s)
    {
        v.push_back(i);
    }
    for(int i=1;i<v.size();i++)
        s1.insert(v[i]-v[i-1]);
    if(s1.size()==1)
    {
        for(auto i:s1)
        cout << i;
    }
    else
    {
        cout << -1 ;
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




