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
    string s;
    cin >>  s;
    n=s.size();
    // int row=ceil((float)s.size()/20);
    int row=1;
    // cout << n << "\n";
    while(row<=5)
    {
        if((float)s.size()/row<=20)
        {
            break;
        }
        else
        {
            row++;
        }
    }
    int val = n/row,flag=0;
    if(n%row!=0)
    {
        flag=(row-(n%row));
        val++;
    }
    vector<string>ans;
    int i=0,count=1;
    while(count<=row)
    {
        if(flag==0)
        {
            ans.push_back(s.substr(i,val));
            i+=(val);
        }
        else
        {
            ans.push_back(s.substr(i,val-1)+'*');
            i+=(val-1);
            flag--;
        }
        count++;
    }
    cout << row << " " << val << "\n";
    for(int i=0;i<ans.size();i++)
    {
        cout << ans[i] << "\n";
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
    // int t;
    // cin >> t;
    // while(t--)
    // {
        solve();
    // }
    return 0;
}




