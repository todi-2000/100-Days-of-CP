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
   getline(cin, s);
   string date,year,month;
   for(int i=0;i<s.size();i++)
   {
        if((i==0 || i==1)&&s[i]>=48 && s[i]<=57)
        date+=s[i];
        else if(s.substr(i,3)=="Jan")
        {
            month+='1';
        }
        else if (s.substr(i, 3) == "Feb")
        {
            month += '2';
        }
        else if (s.substr(i, 3) == "Mar")
        {
            month += '3';
        }
        else if (s.substr(i, 3) == "Apr")
        {
            month += '4';
        }
        else if (s.substr(i, 3) == "May")
        {
            month += '5';
        }
        else if (s.substr(i, 3) == "Jun")
        {
            month += '6';
        }
        else if (s.substr(i, 3) == "Jul")
        {
            month += '7';
        }
        else if (s.substr(i, 3) == "Aug")
        {
            month += '8';
        }
        else if (s.substr(i, 3) == "Sep")
        {
            month += '9';
        }
        else if (s.substr(i, 3) == "Oct")
        {
            month += "10";
        }
        else if (s.substr(i, 3) == "Nov")
        {
            month += "11";
        }
        else if (s.substr(i, 3) == "Dec")
        {
            month += "12";
        }
        else if (s[i] >= 48 && s[i] <= 57)
            year += s[i];
   }
   cout << date << "-"<<month<<"-"<<year<< "\n";
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




