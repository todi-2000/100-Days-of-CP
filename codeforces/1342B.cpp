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
    string s;
    cin >> s;
    if(s.size()==2)
    cout << s << "\n";
    else
    {
        int k=1,flag=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]!=s[i+k])
            {
                flag=1;
                break;
            }
        }   
        if(flag==0)
        cout << s << "\n";
        else
        {
            string ans;
            for(int i=0;i<s.size()-1;i++)
            {
                ans+=s[i];
                if(s[i]==s[i+1])
                {
                    if(s[i]=='0') ans+='1';
                    else ans+='0';
                }
            }
            ans+=s[s.size()-1];
            cout << ans << "\n";
        }
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




