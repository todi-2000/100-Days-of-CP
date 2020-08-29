// Question Link:https://www.codechef.com/LTIME87B/problems/ARRGAME
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
    vector<int>b;
    int count0=0;
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=1;i<n-1;i++)
    {
        
        if(arr[i]==0)
            count0++;
        else
        {
            if(count0!=0)
            b.push_back(count0);
            count0=0;
        }
    }
    if (count0 != 0)
        b.push_back(count0);
    if(b.size()==0){cout << "No" << "\n";return;}
    if(b.size()==1)
    {
        if(b[0]%2==0)
        cout << "No" << "\n";
        else
        cout << "Yes" << "\n";
        return;
    }
    sort(b.begin(),b.end(),greater<int>());
    if(b[0]%2!=0)
    {
        if(ceil((float)b[0]/2)>b[1])
        cout << "Yes" << '\n';
        else
        cout << "No" << "\n";
    }
        
    else
        cout << "No" << '\n';
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




