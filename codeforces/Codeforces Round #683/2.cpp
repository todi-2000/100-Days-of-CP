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
   int n,m;
   cin >> n >> m;
   int ncount=0;
   vector<vector<int>>arr(n,vector<int>(m));
   lli sum = 0;
   int mi=INT_MAX;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cin >> arr[i][j];
           if(arr[i][j]<=0)
           ncount++;
           sum+=abs(arr[i][j]);
           if(abs(arr[i][j])<mi) mi=abs(arr[i][j]);
       }
   }
   if(ncount%2==0)
   cout << abs(sum) << "\n";
   else
   {
       cout << abs(sum)-2*mi << "\n";
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




