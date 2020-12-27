// Question Link:
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<string.h>
# define mod 1000000007
using namespace std;
typedef long long int lli;

bool isPalindrome(string str)
{
    int low = 0;
    int high = str.length() - 1;

    while (low < high)
    {
        // if mismatch happens
        if (str[low] != str[high])
            return false;

        low++;
        high--;
    }

    return true;
}

void solve()
{
   //write your code here
   string s;
   cin >> s;
   if(isPalindrome(s))
   {
       for(int i=0;i<s.size()-1;i++)
       {
           if(s[i]!=s[i+1])
           {
               char temp=s[i];
               s[i]=s[i+1];
               s[i+1]=temp;
               cout << s << "\n";
               return;
           }
       }
       cout << -1 << "\n";
   }
   else
   cout << s << "\n";
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




