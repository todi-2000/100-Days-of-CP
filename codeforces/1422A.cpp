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
    lli  a,b,c;
    cin >> a >> b >> c;
    if(a==b)
    cout << c << "\n";
    else if(b==c)
    cout << a << "\n";
    else if(a==c)
    cout << b << "\n";
    else
    {
        vector<int>arr;
        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);
        sort(arr.begin(),arr.end());
        cout << arr[2]+1 << "\n";
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





