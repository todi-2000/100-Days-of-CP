#include <bits/stdc++.h>
using namespace std;

int main()
{
    string msg, div, encoded;
    cout << "Enter the message =";
    cin >> msg;
    cout << "Enter the divisor =";
    cin >> div;
    int m = msg.size(), n = div.size();
    encoded = msg;
    for (int i = 1; i <= n - 1; i++)
        encoded += '0';
    for (int i = 0; i <= encoded.size() - n;)
    {
        for (int j = 0; j < n; j++)
            encoded[i + j] = encoded[i + j] == div[j] ? '0' : '1';
        for (; i < encoded.size() && encoded[i] != '1'; i++);
    }
    cout << "Sent word is:" << msg + encoded.substr(encoded.size() - n + 1);
    return 0;
}
