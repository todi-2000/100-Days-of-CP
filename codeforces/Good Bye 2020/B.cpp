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
    for(int i=0;i<n;i++)
    cin >> arr[i];
    sort(arr.begin(),arr.end());
    set<int>s;
    map<int,int>_map;
    for(int i=0;i<n;i++)
    {   
        if(_map[arr[i]]>0){
            _map[arr[i]+1]++;
            s.insert(arr[i]+1);
        }
        else{
            _map[arr[i]]++;
            s.insert(arr[i]);
        }
    }
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




