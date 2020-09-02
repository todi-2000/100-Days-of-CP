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
    lli n,ans=0;
    cin >> n;
    vector<lli>count(32,0);
    string s1,bin_str="00000";
    for(lli i=0;i<n;i++)
    {
        bin_str = "00000";
        cin >> s1;
        for(lli i=0;i<s1.size();i++)
        {
            if(s1[i]=='a') bin_str[4]='1';
            else if(s1[i]=='e') bin_str[3]='1';
            else if(s1[i]=='i') bin_str[2]='1';
            else if(s1[i]=='o') bin_str[1]='1';
            else if(s1[i]=='u') bin_str[0]='1';
        }
        lli num=stoi(bin_str,0,2);
        count[num]++;
        if(n==1 && num==31)
        {
            cout << 1 << "\n";
            return;
        }
    }
    for(lli i=1;i<32;i++)
    {
        for(lli j=i+1;j<32;j++)
        {
            lli orval=(i)|(j);
            // cout << i << " " << j << " " << orval << "\n";
            if(orval==31)
                ans+=(count[i]*count[j]);
        }
    }
    ans=ans+(count[31]*(count[31]-1))/2;
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




