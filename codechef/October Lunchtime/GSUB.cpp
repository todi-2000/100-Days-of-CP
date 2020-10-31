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
    lli n,q;
    cin >> n >> q;
    vector<lli>arr(n);
    for(lli i=0;i<n;i++)
    cin >> arr[i];
    lli val=arr[0],count=1;
    for(lli i=1;i<n;i++)
    {
        if(arr[i]!=val)
        {
            count++;
            val=arr[i];
        }
    }
    for(lli i=0;i<q;i++)
    {
        lli x,y;
        cin >> x >> y;
        if(n==1)
        {
            arr[0]=y;
            cout << 1 << "\n";continue;
        }
        if(arr[x-1]==y){
            cout << count << "\n";
            continue;
        } 
        if(x==1)
        {
            if(arr[0]==arr[1])
            {
                count++;
            }
            else if(y==arr[1])
            {
                count--;
            }
        }
        else if(x==n)
        {
            if (arr[n-1] == arr[n-2])
                count++;
            else if (y == arr[n-2])
                count--;
        }
        else if (arr[x - 1] != arr[x] && arr[x - 1] != arr[x - 2])
        {
            if (arr[x - 2] == y && arr[x] == y)
                count -= 2;
            else if (arr[x - 2] == y || arr[x] == y)
                count--;
        }
        else if (arr[x - 1] == arr[x] && arr[x - 1] == arr[x - 2])
        {
            if(arr[x-2]==y && arr[x]==y) count=count;
            else
            count+=2;
        }
        else if (arr[x - 1] == arr[x] || arr[x - 1] == arr[x - 2])
        {
            if(arr[x]!=y && arr[x-2]!=y)
            count+=1;
        }
        arr[x - 1] = y;
        cout << count << "\n";
        continue;
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




