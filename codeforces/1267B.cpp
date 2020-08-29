// Question Link:https://codeforces.com/problemset/problem/1267/B
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
   vector<int>val;
   int count=1;
   for(int i=1;i<s.size();i++)
   {
       if(s[i]!=s[i-1])
       {
           val.push_back(count);
           count=1;
       }
       else
       count++;
   } 
   if(count!=0)val.push_back(count);
//    cout << val.size();
   if(val.size()==1 || val.size()==3 || val.size()==2)
   {
        if(val.size()==1 && val[0]>1){
           cout << val[0]+1 << "\n";return;
       }

       if(val.size()==3)
       {
           if(val[0]+val[2]>=3 && val[1]>1)
            {cout << val[1]+1 << "\n";return;}
       }
       if(val.size()==2)
       {
           if()
       }
   }
   cout << 0 << "\n";
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




