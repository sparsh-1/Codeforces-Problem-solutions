// https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>

#define fi          first
#define se          second
#define pb          push_back
#define mp          make_pair
#define ll          long long
#define pll         pair<long, long>
#define vll         vector<long long>
#define inf         1e18
#define range(a,b)  substr(a,b-a+1)
#define FIO         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main()
{
    FIO;

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string s;
    cin >> s;
    ll a = count(s.begin(), s.end(), '1');
    ll b = count(s.begin(), s.end(), '2');
    ll c = count(s.begin(), s.end(), '3');
    if (a > 0)
        if (b > 0 || c > 0)
            for (int i = 0; i < a; i++)
                cout << "1+";
        else {
            for (int i = 0; i < a - 1; i++)
                cout << "1+";
            cout << "1";
        }
    if (b > 0)
        if (c > 0)
            for (int i = 0; i < b; i++)
                cout << "2+";
        else {
            for (int i = 0; i < b - 1; i++)
                cout << "2+";
            cout << "2";
        }
    if (c > 0) {
        for (int i = 0; i < c - 1; i++)
            cout << "3+";
        cout << "3";
    }
    return 0;
}