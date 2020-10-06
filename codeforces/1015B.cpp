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
    cin >>n ;
    string s,t;
    cin >> s >> t;
    vector<int>pos;
    for(int i=0;i<n;i++)
    {
        if(s[i]==t[i]) continue;
        else if(s[i]!=t[i])
        {
            int idx=-1;
            for(int j=i+1;j<n;j++)
            {
                if(s[j]==t[i])
                {
                    idx = j;
                    break;
                }
            }
            if(idx==-1)
            {
                cout << -1 << "\n";return;
            }
            for(int j=idx-1;j>=i;j--)
            {
                char temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                pos.push_back(j+1);
            }
        }
    }
    cout << pos.size() << "\n";
    for(int i=0;i<pos.size();i++)
        cout << pos[i] << " ";
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




