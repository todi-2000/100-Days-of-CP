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
    sort(arr.begin(),arr.end());
    vector<bool>visited(1000,0);
    lli ans=0;
    for(int i=0;i<n;i++)
    {
        if(visited[arr[i]]==0)
        {
            ans+=0;
            visited[arr[i]]=1;
        }
        else
        {
            int x=arr[i],c=1,count=0;
            while(1)
            {
                if (x - c > 0 && visited[x - c] == 0)
                {
                    ans+=c;
                    visited[x-c]=1;break;
                }
                else if (visited[x + c] == 0)
                {
                    ans+=c;
                    visited[x + c] = 1;
                    break;
                }
                else {
                    if(count==1){
                    c++;
                    count=0;}
                }
                count++;
            }
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
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}




