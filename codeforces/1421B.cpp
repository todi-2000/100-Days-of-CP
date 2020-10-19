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
    vector<vector<char>>ch(n,vector<char>(n));
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        cin>>ch[i][j];
    if((ch[1][0]=='1'&&ch[0][1]=='1')&&(ch[n-2][n-1]=='0'&&ch[n-1][n-2]=='0'))
    cout << 0 << "\n";
    else if ((ch[1][0] == '0' && ch[0][1] == '0') && (ch[n - 2][n - 1] == '1' && ch[n - 1][n - 2] == '1'))
    cout << 0 << "\n";
    else
    {
        int count0=0,count1=0;
        if(ch[1][0]=='0') count0++;
        if(ch[0][1]=='0') count0++;
        if(ch[n-1][n-2]=='0') count0++;
        if(ch[n-2][n-1]=='0') count0++;
        count1=4-count0;
        if(count1==0 || count0==0)
        {
            cout << 2 << "\n";
            cout << 1 << " " << 2 <<"\n";
            cout << 2 << " " << 1 <<"\n";
        }
        else if(count0==1 || count1==1)
        {
            cout << 1 << "\n";int val=0;
            if(count0==1) val='0';
            else val='1';
            if(ch[0][1]==val)
                cout << 2 << " " << 1 << "\n";
            else if (ch[1][0] == val) cout << 1 << " " << 2 <<"\n";
            else if(ch[n-2][n-1]==val) cout << n << " " << n-1 <<"\n";
            else
                cout << n-1 << " " << n << "\n";
        }
        else if(count0==2 || count1==2)
        {
            cout << 2 << "\n";
            if (ch[0][1] == '1')
                cout << 1 << " " << 2 << "\n";
            else if (ch[1][0] == '1')
                cout << 2 << " " << 1 << "\n";
            if (ch[n - 2][n - 1] == '0')
                cout << n-1 << " " << n << "\n";
            else if (ch[n - 1][n - 2] == '0')
                cout << n << " " << n-1 << "\n";
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




