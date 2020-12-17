// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

vector<lli>arr(1000001);

void seive()
{
    int maxN=1000000;
    for(int i=1;i<=maxN;i++)
    arr[i]=-1;
    arr[0]=1,arr[1]=1;
    for(int i=2;i<=maxN;i++)
    {
        if(arr[i]==-1)
        {
            for(int j=i;j<=maxN;j+=i)
            {
                if(arr[j]==-1)
                arr[j]=i;
            }
        }
    }
}

void solve()
{
   //write your code here
   int n;
   cin >> n;
   while(n!=1)
   {
        cout << arr[n] << " ";
        n/=arr[n];
   }
   cout << "\n";
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
    seive();
    while(t--)
    {
        solve();
    }
    return 0;
}




