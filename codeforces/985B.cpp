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
   cin >> n >>m;
   vector<string>onoff(n);
   for(int i=0;i<n;i++)
   {cin >> onoff[i];
   }
   vector<int>arr(m,0);
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(onoff[j][i]=='1')
                arr[i]+=1;
       }
   }
//    for(int i=0;i<m;i++)
//    cout << arr[i] << " ";
   for(int i=0;i<n;i++)
   {
       int flag=1;
       vector<int>sum;
       sum=arr;
       for(int j=0;j<m;j++)
       {
           sum[j]-=(onoff[i][j]-'0');
           if(sum[j]<=0)
           {
               flag=0;
               break;
           }
       }
       if(flag==1)
       {
           cout << "YES"
            << "\n";return;
       }
   }
   cout << "NO"
        << "\n";
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




