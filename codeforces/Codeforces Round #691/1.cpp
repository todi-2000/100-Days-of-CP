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
    string r,b;
    cin >> r >> b;
    int r1=0,b1=0;
    for(int i=0;i<n;i++)
    {
        if(r[i]>b[i])
            r1++;
        else if(r[i]<b[i])
            b1++;
    } 
    if(r1>b1)
    cout << "RED" << "\n";
    else if(b1>r1)
    cout << "BLUE" << "\n";
    else
    {
        cout << "EQUAL" << "\n";
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




