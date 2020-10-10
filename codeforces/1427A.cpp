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
   vector<int>a(n);
   for(int i=0;i<n;i++)
   cin >> a[i];
   sort(a.begin(),a.end());
   int sum=0,flag=0;
   for(int i=0;i<n;i++)
   {
       sum+=a[i];
       if(sum==0)
       {
           flag=1;break;
       }
   }
   if(flag==0)
   {
       cout << "YES"<< "\n";
       for (int i = 0; i < n; i++)
           cout << a[i] << " ";
       cout << "\n";
   }
   else 
   {
       int sum1=0;
       for(int i=n-1;i>=0;i--)
       {
           sum1+=a[i];
           if(sum1==0)
           {
               cout << "NO" << "\n";
               return;
           }
       }
       cout << "YES"
            << "\n";
       for (int i = n-1; i >=0; i--)
           cout << a[i] << " ";
       cout << "\n";
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




