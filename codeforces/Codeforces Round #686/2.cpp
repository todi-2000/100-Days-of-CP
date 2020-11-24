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
   vector<int>x(n);
   for(int i=0;i<n;i++){
       cin >> arr[i];
       x[i]=arr[i];
   }
   if(n==1)
   {
       cout << 1 << "\n";
       return;
   }
   sort(arr.begin(),arr.end());
   for(int i=0;i<n;i++){
   if(i+1<n && i-1>=0 && arr[i]!=arr[i+1] && arr[i]!=arr[i-1])
   {
    //    cout << arr[i] << " ";
       cout << find(x.begin(),x.end(),arr[i])-x.begin()+1 << "\n";return;
   }
   else if(i==0 && arr[i]!=arr[i+1])
   {
    //    cout << arr[i] << " "<<arr[i+1] << " ";
       cout << find(x.begin(), x.end(), arr[i]) - x.begin() + 1 << "\n";
       return;
   }
   }
   if(arr[n-1]==arr[n-2])
   {
       cout << -1 << "\n";
       return;
   }
   else
   {
       cout << find(x.begin(), x.end(), arr[n-1]) - x.begin()+1 << "\n";
       return;
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




