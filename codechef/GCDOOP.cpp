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
   vector<int>arr(n+1);
   for(int i=1;i<n+1;i++)
   cin >> arr[i];
   for(int i=1;i<n+1;i++)
   {
       if(arr[i]!=i)
       {
           if(i%arr[i]!=0)
           {
               cout << "NO" << "\n";
               return;
           }
       }
   }
   cout << "YES" << "\n";
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




