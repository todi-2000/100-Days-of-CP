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
    vector<lli>arr(n);
    for(lli i=0;i<n;i++)
    cin >> arr[i];
    lli front=-1,back=n,frontsum=0,backsum=0,ans=0;
    while(front<back)
    {
        if(frontsum==backsum)
        {
            ans=max(ans,frontsum);
            front++;
            back--;
            if(front<back){
            frontsum+=arr[front];
            backsum+=arr[back];}
        }
        else if(frontsum>backsum)
        {
            back--;
            if (front < back)
                backsum +=arr[back];
        }
        else
        {
            front++;
            if (front < back)
                frontsum += arr[front];
        }
        
    }
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




