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
   vector<lli>newarr(n);
   for(int i=0;i<n;i++)
   {
       cin >> arr[i];
       newarr[i]=arr[i];
   }
   sort(newarr.begin(),newarr.end());
//    lli mid=ceil(double(n)/2);
//    lli val = newarr[mid-1], ch, count = 1;
//    lli first=val-newarr[0],last=newarr[n-1]-val,mi=LONG_LONG_MAX,ans=0,c=0;
//    if(first>=last) ch=newarr[0];
//    else ch=newarr[n-1];
//    cout << ch << " ";
    vector<lli>temp;
    for(int i=2;i<n;i++)
            temp.push_back(abs(arr[i]-arr[0]));
    lli ans = 0, ans1 = 0, mi = LONG_LONG_MAX, mi1 = LONG_LONG_MAX;
    for(int i=0;i<temp.size();i++)
    {
        if (temp[i] == 0 && mi != LONG_LONG_MAX)
        {
            ans+=mi;
        }
        mi=min(mi,temp[i]);
    }
    ans += min(mi,LONG_LONG_MAX);
    for (int i = 1; i < temp.size(); i++)
    {
        if (temp[i] == 0 && mi1 != LONG_LONG_MAX)
        {
            ans1 += mi1;
        }
        mi1 = min(mi1, temp[i]);
    }
    ans1 += min(mi1,LONG_LONG_MAX);
    cout << min(ans, ans1) << "\n";
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




