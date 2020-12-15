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
    int x;
    cin >> x;
    if(x>=1 && x<=9)
    {
        cout << x << "\n";
    }
    else if(x>45)
    {
        cout << -1 << "\n";
    }
    else if (x == 39)
    {
        cout << "456789\n";
    }
    else if (x == 40)
    {
        cout << "1456789\n";
    }
    else if (x == 41)
    {
        cout << "2456789\n";
    }
    else if (x == 42)
    {
        cout << "3456789\n";
    }
    else if (x == 43)
    {
        cout << "13456789\n";
    }
    else if (x == 44)
    {
        cout << "23456789\n";
    }
    else if (x == 45)
    {
        cout << "123456789\n";
    }
    else
    {
        vector<int> ans;
        vector<bool>arr(10,0);
        ans.push_back(9);
        x-=9;
        arr[9]=true;
        int val=8;
        while((x>=9 && val>=1) || (arr[x]==true))
        {
            ans.push_back(val);
            arr[val]=true;
            x -= val;
            val--;
        }
        // cout << x << "\n";
        if(arr[x]==false)
        ans.push_back(x);
        else
        {
            cout << -1 << "\n";return;
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        cout << ans[i];
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




