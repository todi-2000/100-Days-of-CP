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
    int sum=0,count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(arr[i]==1)
        count1++;
        else
        count2++;
    }
    if(sum%2!=0)
    {
        cout << "NO" << "\n";
    }
    else
    {
        if((sum/2)%2==0)
        cout << "YES" << "\n";
        else
        {
            if(count1>=2)
            cout << "YES" << "\n";
            else
            cout << "NO" << "\n";
        }
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




